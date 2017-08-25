using System;

class Solution
{
	public static void Main(String[] args)
	{
		var tokens_n = Console.ReadLine().Split(' ');
		int n = Convert.ToInt32(tokens_n[0]);
		int d = Convert.ToInt32(tokens_n[1]);
		var a_temp = Console.ReadLine().Split(' ');
		var array = Array.ConvertAll(a_temp, Int32.Parse);
		int[] result = leftRotation(array, d);
		Console.WriteLine(String.Join(" ", result));


	}

	public static int[] leftRotation(int[] array, int d)
	{
		// Complete this function
		Reverse(array, 0, d - 1);
		Reverse(array, d, array.Length-1);
		Reverse(array, 0, array.Length-1);

		return array;
	}

	public static void Swap(int[] array, int a, int b)
	{
		int tmp = array[a];
		array[a] = array[b];
		array[b] = tmp;
	}

	public static void Reverse(int[] array, int start, int end)
	{
		for (int i = start; i <= (start + end) / 2; i++)
		{
			Swap(array, i, (start + end) - i);
		}
	}
}