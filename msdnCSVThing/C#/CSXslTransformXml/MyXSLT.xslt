<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
    xmlns:msxsl="urn:schemas-microsoft-com:xslt" exclude-result-prefixes="msxsl"
>
  <xsl:output method="text"/>

  <xsl:template match="catalog">
    <xsl:apply-templates select ="game"/>
  </xsl:template>

  <xsl:template match="game">
    <xsl:text>&#34;</xsl:text>
    <xsl:for-each select ="*">
      <xsl:text>&#34;</xsl:text>
      <xsl:value-of select ="."/>
      <xsl:text>&#34;</xsl:text>
      <xsl:if test ="position() != last()">
        <xsl:value-of select ="','"/>
      </xsl:if>
    </xsl:for-each>
    <!--<xsl:text>&#xD;&#xa;</xsl:text>-->
  </xsl:template>
</xsl:stylesheet>