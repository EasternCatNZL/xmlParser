<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="2.0">
<body style="font-family:Arial; font-size:12pt; background-color:#EEEEEE">
<xsl:for-each select="favourite_games/game">
	<div style="background-color:teal; color:white; padding:4px">
		<span style="font-weight:bold"><xsl:value-of select="title"/> - </span><xsl:value-of select="genre"/>
	</div>
	<div style="margin-left:20px; margin-bottom:1em; font-size:10pt">
		<p>
		<xsl:value-of select="developer"/> <span style="font-style:italic">(<xsl:value-of select="year"/>)</span>
		</p>
	</div>
	<div style="margin-left:20px; margin-bottom:1em; font-size:10pt">
		<p>
		<xsl:value-of select="my_review"/>
		</p>
	</div>
</xsl:for-each>
</body>
</xsl:stylesheet>