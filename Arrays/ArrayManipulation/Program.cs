using System;
using System.Linq;

namespace ArrayManipulation
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			var firstInput = Console.ReadLine().Split(' ');
			long n = Convert.ToInt64(firstInput[0]);
			long m = Convert.ToInt64(firstInput[1]);
			long[] array = new long[n];

			long max = long.MinValue;

			for (long i = 0; i < m; i++)
			{
				string[] tokens_a = Console.ReadLine().Split(' ');
				long a = Convert.ToInt64(tokens_a[0]) - 1;
				long b = Convert.ToInt64(tokens_a[1]) - 1;
				long k = Convert.ToInt64(tokens_a[2]);

				//for (long j = 0; j < n; j++)
				//{
				//	if (a <= j && j <= b)
				//	{
				//		array[j] += k;
				//		if (array[j] > max)
				//		{
				//			max = array[j];
				//		}
				//	}
				//}

				array[a] += k;
				if (b < n)
				{
					array[b] -= k;
				}
			}

			long x = 0;
			for (long i = 0; i < n; i++)
			{
				x += array[i];
				if (max < x)
				{
					max = x;
				}
			}

			Console.WriteLine(max);
		}
	}
}
