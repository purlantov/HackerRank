using System;
using System.Collections.Generic;
using System.Linq;

namespace DynamicArray
{
	public class MainClass
	{
		public static void Main()
		{
			var firstInput = Console.ReadLine().Split(' ').Select(x => int.Parse(x)).ToArray();
			int n = firstInput[0];
			int q = firstInput[1];
			int lastAnswer = 0;
			var array = new int[q][];
			//int result = 0;


			for (int i = 0; i < q; i++)
			{
				var input = Console.ReadLine().Split(' ').Select(v => Convert.ToInt32(v)).ToArray();
				int t = input[0];
				int x = input[1];
				int y = input[2];

				if (t == 1)
				{
					array[(x ^ lastAnswer) % n] = new int[]{y};
				}
				else
				{
					lastAnswer = array[(x ^ lastAnswer) % n][y % array[(x ^ lastAnswer) % n].Count()];
					Console.WriteLine(lastAnswer);
				}
			}
		}
	}
}

//int n, q;
//cin >> n >> q;
//
//vector<vector<int>> s(n, vector<int> ());
//int lastAnswer = 0;
//
//for (int i = 0; i<q;i++) 
//{
//    int t, x, y;
//	cin >> t >> x >> y;
//
//    if (t==1) {
//        s[(x ^ lastAnswer) % n].push_back(y);
//    }
//    else {
//        lastAnswer=s[(x ^ lastAnswer) % n][y % s[(x ^ lastAnswer) % n].size()];
//        cout << lastAnswer << endl;
//    }
//}
