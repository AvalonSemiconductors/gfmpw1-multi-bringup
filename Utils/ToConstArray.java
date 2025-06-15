import java.io.*;

public class ToConstArray {
	public static void main(String[] args) {
		try {
			FileInputStream fis = new FileInputStream(args[0]);
			int len = 0;
			boolean veryCompact = args.length > 1 && args[1].equalsIgnoreCase("true");
			System.out.println("const uint32_t pgm[] = {");
			System.out.print("\t");
			while(fis.available() > 0) {
				len++;
				if(len % 16 == 0) {
					System.out.println();
					System.out.print("\t");
				}
				int val = fis.read();
				val |= (fis.read() & 0xFF) << 8;
				if(veryCompact) {
					val |= (fis.read() & 0xFF) << 16;
					val |= (fis.read() & 0xFF) << 24;
				}
				if(veryCompact) System.out.print(String.format("0x%08x,", val));
				else System.out.print(String.format("0x%04x,", val));
			}
			System.out.println();
			System.out.println("\t'C','h','i','r','p','!'");
			len += 6;
			System.out.println("};");
			System.out.println("const uint32_t pgm_len = " + len + ";");
			fis.close();
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
}
