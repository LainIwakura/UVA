import java.io.*;
import java.util.*;

class Main
{
	static long reverse_num(long n)
	{
		String num = "" + n;
		StringBuffer sb = new StringBuffer(num);
		String rev = sb.reverse().toString();
		long r = (long)Integer.parseInt(rev);
		return r;
	}

	static boolean is_pal(long n)
	{
		String num = "" + n;
		StringBuffer sb = new StringBuffer(num);
		String rev = sb.reverse().toString();
		if (num.equals(rev))
			return true;
		else
			return false;	
	}

	public static void main(String args[]) throws Exception
	{
		try
		{
			Scanner in = new Scanner(System.in);
			PrintWriter out = new PrintWriter(System.out, true);
		
			int i = in.nextInt();
			while(i-- != 0)
			{
				while (in.hasNextLong())
				{
					long count = 0;
					long num = in.nextLong();
					long sum = 0;
					boolean pal = false;
					while (!pal)
					{
						long rev = reverse_num(num);
						sum = rev + num;
						if (is_pal(sum))
						{
							pal = true;
							++count;
						}
						else
						{
							num = sum;
							++count;
						}
					}
					out.printf("%d %d\n", count, sum);
				}
			}	
		} catch (Exception e) {
			System.out.println(e.getMessage());
		}
	}
}
