using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution
{

	static string TimeConversion(string s)
	{
		// Complete this function



		return s;
	}

	public static int GetHour(string str)
	{
		int hour = (str[0] + str[1]) - '0';
		return hour;
	}

	static void Main(String[] args)
	{
		string s = Console.ReadLine();
		string result = TimeConversion(s);
		Console.WriteLine(result);
	}
}
