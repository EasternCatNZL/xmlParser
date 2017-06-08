/****************************** Module Header ******************************\
* Module Name:  Program.cs
* Project:      CSXslTransformXml
* Copyright (c) Microsoft Corporation.
* 
* This sample project shows how to use XslCompiledTransform to transform an 
* XML data file to .csv file using an XSLT style sheet.
* 
* This source is subject to the Microsoft Public License.
* See http://www.microsoft.com/en-us/openness/resources/licenses.aspx#MPL.
* All other rights reserved.
* 
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND, 
* EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
\***************************************************************************/

#region Using directives
using System.Xml.Xsl;
using System;
#endregion


namespace CSXslTransformXml
{
    class Program
    {
        private static string xmlFileName;
        private static string xsltFileName;
        private static string csvFileName;

        static void Main(string[] args)
        {
            //Have console prompt user for files
            Console.WriteLine("Enter xml filename (Exp: MyData.xml)");
            xmlFileName = Console.ReadLine();
            Console.WriteLine("Enter xslt filename(Exp: MyStyle.xslt)");
            xsltFileName = Console.ReadLine();
            Console.WriteLine("Enter desired outputted filename(Exp: MyNewFile.csv)");
            csvFileName = Console.ReadLine();

            // Initialize an XslCompiledTransform instance.
            XslCompiledTransform transform = new XslCompiledTransform();

            // Call transform.Load() to load the XSLT style sheet Books.xslt.
            transform.Load(xsltFileName);

            // Call transform.Transform() to transform the source XML file 
            // to a csv file using the XSLT style sheet.
            transform.Transform(xmlFileName, csvFileName);
        }
    }
}
