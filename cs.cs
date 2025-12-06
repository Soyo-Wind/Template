using System;using System.Collections.Generic;using System.Diagnostics;using System.Linq;using System.Numerics;using static System.Math;using teg=System.Int32;using rin=System.String;using vi=System.Collections.Generic.List<int>;using vs=System.Collections.Generic.List<string>;using vvi=System.Collections.Generic.List<System.Collections.Generic.List<int>>;using si=System.Collections.Generic.SortedSet<int>;using qi=System.Collections.Generic.Queue<int>;using dii=System.Collections.Generic.Dictionary<int,int>;using dsi=System.Collections.Generic.Dictionary<string,int>;using mi=System.Collections.Generic.HashSet<int>;
using static utils;

class P{
    public static void Main(string[] args){
        
    }
}
class utils{public static void dpst(ref vi dp)=>dp[0]=0;public static void dpst(ref vvi dp)=>dp[0][0]=0;public static int tegin()=>rintoint(rinin());public static List<int> vifil(int a)=>Enumerable.Repeat(a,10000000).ToList();public static string rinin()=>Console.ReadLine();public static List<int>viin()=>rintovs(rinin()).Select(int.Parse).ToList();public static void print(object x,rin end)=>Console.Write(x+end);public static void print(object x)=>Console.WriteLine(x);public static void print<T>(List<T>a)=>print(string.Join(" ",a));public static void print<T>(HashSet<T>a)=>print(string.Join(" ",a));public static int rintoint(string s)=>int.Parse(s);public static string yn(int b)=>b>0?"Yes":"No";public static string yn(bool b)=>b?"Yes":"No";public static List<rin>rintovs(rin a)=>a.Split(' ').ToList();public static void fin()=>Environment.Exit(0);public static bool chmin(ref List<int> dp,int index,int b){if(dp[index]>b){dp[index]=b;return true;}return false;}public static bool chmax(ref List<int> dp,int index,int b){if(dp[index]<b){dp[index]=b;return true;}return false;}}
