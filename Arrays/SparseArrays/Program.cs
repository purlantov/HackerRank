using System;

namespace SparseArrays
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			int n = int.Parse(Console.ReadLine());
			var strings = new string[n];
			for (int i = 0; i < n; i++)
			{
				strings[i] = Console.ReadLine();
			}

			int q = int.Parse(Console.ReadLine());
			string input;
			int counter = 0;
			for (int i = 0; i < q; i++)
			{
				input = Console.ReadLine();
				foreach (var str in strings)
				{
					if (str == input)
					{
						counter++;
					}
				}
				Console.WriteLine(counter);
				counter = 0;
			}
		}
	}
}
