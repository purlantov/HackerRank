using System;
using System.Linq;

public class MainClass
{
	public static void Main(String[] args)
	{
		var array = new int[6, 6];

		for (int i = 0; i < 6; i++)
		{
			var input = Console.ReadLine().Split(' ').Select(x => Convert.ToInt32(x)).ToArray();

			for (int j = 0; j < 6; j++)
			{
				array[i, j] = input[j];
			}
		}

		int sum = 0;
		int max = int.MinValue;


		for (int row = 0; row < 4; row++)
		{
			for (int col = 0; col < 4; col++)
			{
				sum += array[row, col] + array[row, col + 1] + array[row, col + 2];
				sum += array[row + 1, col + 1];
				sum += array[row + 2, col] + array[row + 2, col + 1] + array[row + 2, col + 2];
				if (sum > max)
				{
					max = sum;
				}
				sum = 0;
			}

		}

		Console.WriteLine(max);
	}
}