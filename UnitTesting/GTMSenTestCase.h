


<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 <script type="text/javascript">
 
 
 
 var codesite_token = null;
 
 
 var logged_in_user_email = null;
 
 
 var relative_base_url = "";
 
 </script>
 
 
 <title>GTMSenTestCase.h - 
 google-toolbox-for-mac -
 
 Project Hosting on Google Code</title>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/14756227129406843427/css/ph_core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/14756227129406843427/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/14756227129406843427/css/d_sb_20080522.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/14756227129406843427/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 </style>
</head>
<body class="t4">
 <script type="text/javascript">
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-5510657-1'],
 ['projectTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 </script>
 <div id="gaia">
 
 <span>
 
 <a href="#" id="projects-dropdown" onclick="return false;"><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Fgoogle-toolbox-for-mac%2Fsource%2Fbrowse%2Ftrunk%2FUnitTesting%2FGTMSenTestCase.h&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Fgoogle-toolbox-for-mac%2Fsource%2Fbrowse%2Ftrunk%2FUnitTesting%2FGTMSenTestCase.h" onclick="_CS_click('/gb/ph/signin');"><u>Sign in</u></a>
 
 </span>

 </div>
 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if IE 6]>
<div style="text-align:center;">
Support browsers that contribute to open source, try <a href="http://www.firefox.com">Firefox</a> or <a href="http://www.google.com/chrome">Google Chrome</a>.
</div>
<![endif]-->




 <table style="padding:0px; margin: 20px 0px 0px 0px; width:100%" cellpadding="0" cellspacing="0">
 <tr style="height: 58px;">
 
 <td style="width: 55px; text-align:center;">
 <a href="/p/google-toolbox-for-mac/">
 
 
 <img src="/p/google-toolbox-for-mac/logo?cct=1282748061" alt="Logo">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname" style="margin: 0px 0px -3px 0px">
 <a href="/p/google-toolbox-for-mac/" style="text-decoration:none; color:#000">google-toolbox-for-mac</a>
 
 </div>
 <div id="psum">
 <i><a id="project_summary_link" href="/p/google-toolbox-for-mac/" style="text-decoration:none; color:#000">Google Toolbox for Mac</a></i>
 </div>
 
 </td>
 <td style="white-space:nowrap;text-align:right">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="">
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>


 
<table id="mt" cellspacing="0" cellpadding="0" width="100%" border="0">
 <tr>
 <th onclick="if (!cancelBubble) _go('/p/google-toolbox-for-mac/');">
 <div class="tab inactive">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <a onclick="cancelBubble=true;" href="/p/google-toolbox-for-mac/">Project&nbsp;Home</a>
 </div>
 </div>
 </th><td>&nbsp;&nbsp;</td>
 
 
 
 
 <th onclick="if (!cancelBubble) _go('/p/google-toolbox-for-mac/downloads/list');">
 <div class="tab inactive">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <a onclick="cancelBubble=true;" href="/p/google-toolbox-for-mac/downloads/list">Downloads</a>
 </div>
 </div>
 </th><td>&nbsp;&nbsp;</td>
 
 
 
 
 
 <th onclick="if (!cancelBubble) _go('/p/google-toolbox-for-mac/w/list');">
 <div class="tab inactive">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <a onclick="cancelBubble=true;" href="/p/google-toolbox-for-mac/w/list">Wiki</a>
 </div>
 </div>
 </th><td>&nbsp;&nbsp;</td>
 
 
 
 
 
 <th onclick="if (!cancelBubble) _go('/p/google-toolbox-for-mac/issues/list');">
 <div class="tab inactive">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <a onclick="cancelBubble=true;" href="/p/google-toolbox-for-mac/issues/list">Issues</a>
 </div>
 </div>
 </th><td>&nbsp;&nbsp;</td>
 
 
 
 
 
 <th onclick="if (!cancelBubble) _go('/p/google-toolbox-for-mac/source/checkout');">
 <div class="tab active">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <a onclick="cancelBubble=true;" href="/p/google-toolbox-for-mac/source/checkout">Source</a>
 </div>
 </div>
 </th><td>&nbsp;&nbsp;</td>
 
 
 <td width="100%">&nbsp;</td>
 </tr>
</table>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td>
 <div class="st2">
 <div class="isf">
 
 
 
 <span class="inst1"><a href="/p/google-toolbox-for-mac/source/checkout">Checkout</a></span> |
 <span class="inst2"><a href="/p/google-toolbox-for-mac/source/browse/">Browse</a></span> |
 <span class="inst3"><a href="/p/google-toolbox-for-mac/source/list">Changes</a></span> |
 
 <form action="http://www.google.com/codesearch" method="get" style="display:inline"
 onsubmit="document.getElementById('codesearchq').value = document.getElementById('origq').value + ' package:http://google-toolbox-for-mac\\.googlecode\\.com'">
 <input type="hidden" name="q" id="codesearchq" value="">
 <input maxlength="2048" size="38" id="origq" name="origq" value="" title="Google Code Search" style="font-size:92%">&nbsp;<input type="submit" value="Search Trunk" name="btnG" style="font-size:92%">
 
 
 
 </form>
 </div>
</div>

 </td>
 
 
 
 <td height="4" align="right" valign="top" class="bevel-right">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 </td>
 </tr>
</table>
<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>


<div id="maincol"
 
>

 
<!-- IE -->




<div class="expand">


<style type="text/css">
 #file_flipper { display: inline; float: right; white-space: nowrap; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<div id="nav_and_rev" class="heading">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner" id="bub">
 <div class="bub-top">
 <div class="pagination" style="margin-left: 2em">
 <table cellpadding="0" cellspacing="0" class="flipper">
 <tbody>
 <tr>
 
 <td>
 <ul class="leftside">
 
 <li><a href="/p/google-toolbox-for-mac/source/browse/trunk/UnitTesting/GTMSenTestCase.h?r=226" title="Previous">&lsaquo;r226</a></li>
 
 </ul>
 </td>
 
 <td><b>r393</b></td>
 
 </tr>
 </tbody>
 </table>
 </div>
 
 <div class="" style="vertical-align: top">
 <div class="src_crumbs src_nav">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/google-toolbox-for-mac/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/google-toolbox-for-mac/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/google-toolbox-for-mac/source/browse/trunk/UnitTesting/">UnitTesting</a><span class="sp">/&nbsp;</span>GTMSenTestCase.h</span>
 
 
 </div>
 
 </div>
 <div style="clear:both"></div>
 </div>
 </div>
</div>

<style type="text/css">
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }


 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }

</style>
<div class="fc">
 
 
 
<style type="text/css">
.undermouse span { 
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area" 
><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>

<pre><table width="100%" id="nums_table_0"><tr id="gr_svn379_1"

><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn379_2"

><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn379_3"

><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn379_4"

><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn379_5"

><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn379_6"

><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn379_7"

><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn379_8"

><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn379_9"

><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn379_10"

><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn379_11"

><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn379_12"

><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn379_13"

><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn379_14"

><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn379_15"

><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn379_16"

><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn379_17"

><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn379_18"

><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn379_19"

><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn379_20"

><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn379_21"

><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn379_22"

><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn379_23"

><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn379_24"

><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn379_25"

><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn379_26"

><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn379_27"

><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn379_28"

><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn379_29"

><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn379_30"

><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn379_31"

><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn379_32"

><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn379_33"

><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn379_34"

><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn379_35"

><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn379_36"

><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn379_37"

><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn379_38"

><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn379_39"

><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn379_40"

><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn379_41"

><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn379_42"

><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn379_43"

><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn379_44"

><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn379_45"

><td id="45"><a href="#45">45</a></td></tr
><tr id="gr_svn379_46"

><td id="46"><a href="#46">46</a></td></tr
><tr id="gr_svn379_47"

><td id="47"><a href="#47">47</a></td></tr
><tr id="gr_svn379_48"

><td id="48"><a href="#48">48</a></td></tr
><tr id="gr_svn379_49"

><td id="49"><a href="#49">49</a></td></tr
><tr id="gr_svn379_50"

><td id="50"><a href="#50">50</a></td></tr
><tr id="gr_svn379_51"

><td id="51"><a href="#51">51</a></td></tr
><tr id="gr_svn379_52"

><td id="52"><a href="#52">52</a></td></tr
><tr id="gr_svn379_53"

><td id="53"><a href="#53">53</a></td></tr
><tr id="gr_svn379_54"

><td id="54"><a href="#54">54</a></td></tr
><tr id="gr_svn379_55"

><td id="55"><a href="#55">55</a></td></tr
><tr id="gr_svn379_56"

><td id="56"><a href="#56">56</a></td></tr
><tr id="gr_svn379_57"

><td id="57"><a href="#57">57</a></td></tr
><tr id="gr_svn379_58"

><td id="58"><a href="#58">58</a></td></tr
><tr id="gr_svn379_59"

><td id="59"><a href="#59">59</a></td></tr
><tr id="gr_svn379_60"

><td id="60"><a href="#60">60</a></td></tr
><tr id="gr_svn379_61"

><td id="61"><a href="#61">61</a></td></tr
><tr id="gr_svn379_62"

><td id="62"><a href="#62">62</a></td></tr
><tr id="gr_svn379_63"

><td id="63"><a href="#63">63</a></td></tr
><tr id="gr_svn379_64"

><td id="64"><a href="#64">64</a></td></tr
><tr id="gr_svn379_65"

><td id="65"><a href="#65">65</a></td></tr
><tr id="gr_svn379_66"

><td id="66"><a href="#66">66</a></td></tr
><tr id="gr_svn379_67"

><td id="67"><a href="#67">67</a></td></tr
><tr id="gr_svn379_68"

><td id="68"><a href="#68">68</a></td></tr
><tr id="gr_svn379_69"

><td id="69"><a href="#69">69</a></td></tr
><tr id="gr_svn379_70"

><td id="70"><a href="#70">70</a></td></tr
><tr id="gr_svn379_71"

><td id="71"><a href="#71">71</a></td></tr
><tr id="gr_svn379_72"

><td id="72"><a href="#72">72</a></td></tr
><tr id="gr_svn379_73"

><td id="73"><a href="#73">73</a></td></tr
><tr id="gr_svn379_74"

><td id="74"><a href="#74">74</a></td></tr
><tr id="gr_svn379_75"

><td id="75"><a href="#75">75</a></td></tr
><tr id="gr_svn379_76"

><td id="76"><a href="#76">76</a></td></tr
><tr id="gr_svn379_77"

><td id="77"><a href="#77">77</a></td></tr
><tr id="gr_svn379_78"

><td id="78"><a href="#78">78</a></td></tr
><tr id="gr_svn379_79"

><td id="79"><a href="#79">79</a></td></tr
><tr id="gr_svn379_80"

><td id="80"><a href="#80">80</a></td></tr
><tr id="gr_svn379_81"

><td id="81"><a href="#81">81</a></td></tr
><tr id="gr_svn379_82"

><td id="82"><a href="#82">82</a></td></tr
><tr id="gr_svn379_83"

><td id="83"><a href="#83">83</a></td></tr
><tr id="gr_svn379_84"

><td id="84"><a href="#84">84</a></td></tr
><tr id="gr_svn379_85"

><td id="85"><a href="#85">85</a></td></tr
><tr id="gr_svn379_86"

><td id="86"><a href="#86">86</a></td></tr
><tr id="gr_svn379_87"

><td id="87"><a href="#87">87</a></td></tr
><tr id="gr_svn379_88"

><td id="88"><a href="#88">88</a></td></tr
><tr id="gr_svn379_89"

><td id="89"><a href="#89">89</a></td></tr
><tr id="gr_svn379_90"

><td id="90"><a href="#90">90</a></td></tr
><tr id="gr_svn379_91"

><td id="91"><a href="#91">91</a></td></tr
><tr id="gr_svn379_92"

><td id="92"><a href="#92">92</a></td></tr
><tr id="gr_svn379_93"

><td id="93"><a href="#93">93</a></td></tr
><tr id="gr_svn379_94"

><td id="94"><a href="#94">94</a></td></tr
><tr id="gr_svn379_95"

><td id="95"><a href="#95">95</a></td></tr
><tr id="gr_svn379_96"

><td id="96"><a href="#96">96</a></td></tr
><tr id="gr_svn379_97"

><td id="97"><a href="#97">97</a></td></tr
><tr id="gr_svn379_98"

><td id="98"><a href="#98">98</a></td></tr
><tr id="gr_svn379_99"

><td id="99"><a href="#99">99</a></td></tr
><tr id="gr_svn379_100"

><td id="100"><a href="#100">100</a></td></tr
><tr id="gr_svn379_101"

><td id="101"><a href="#101">101</a></td></tr
><tr id="gr_svn379_102"

><td id="102"><a href="#102">102</a></td></tr
><tr id="gr_svn379_103"

><td id="103"><a href="#103">103</a></td></tr
><tr id="gr_svn379_104"

><td id="104"><a href="#104">104</a></td></tr
><tr id="gr_svn379_105"

><td id="105"><a href="#105">105</a></td></tr
><tr id="gr_svn379_106"

><td id="106"><a href="#106">106</a></td></tr
><tr id="gr_svn379_107"

><td id="107"><a href="#107">107</a></td></tr
><tr id="gr_svn379_108"

><td id="108"><a href="#108">108</a></td></tr
><tr id="gr_svn379_109"

><td id="109"><a href="#109">109</a></td></tr
><tr id="gr_svn379_110"

><td id="110"><a href="#110">110</a></td></tr
><tr id="gr_svn379_111"

><td id="111"><a href="#111">111</a></td></tr
><tr id="gr_svn379_112"

><td id="112"><a href="#112">112</a></td></tr
><tr id="gr_svn379_113"

><td id="113"><a href="#113">113</a></td></tr
><tr id="gr_svn379_114"

><td id="114"><a href="#114">114</a></td></tr
><tr id="gr_svn379_115"

><td id="115"><a href="#115">115</a></td></tr
><tr id="gr_svn379_116"

><td id="116"><a href="#116">116</a></td></tr
><tr id="gr_svn379_117"

><td id="117"><a href="#117">117</a></td></tr
><tr id="gr_svn379_118"

><td id="118"><a href="#118">118</a></td></tr
><tr id="gr_svn379_119"

><td id="119"><a href="#119">119</a></td></tr
><tr id="gr_svn379_120"

><td id="120"><a href="#120">120</a></td></tr
><tr id="gr_svn379_121"

><td id="121"><a href="#121">121</a></td></tr
><tr id="gr_svn379_122"

><td id="122"><a href="#122">122</a></td></tr
><tr id="gr_svn379_123"

><td id="123"><a href="#123">123</a></td></tr
><tr id="gr_svn379_124"

><td id="124"><a href="#124">124</a></td></tr
><tr id="gr_svn379_125"

><td id="125"><a href="#125">125</a></td></tr
><tr id="gr_svn379_126"

><td id="126"><a href="#126">126</a></td></tr
><tr id="gr_svn379_127"

><td id="127"><a href="#127">127</a></td></tr
><tr id="gr_svn379_128"

><td id="128"><a href="#128">128</a></td></tr
><tr id="gr_svn379_129"

><td id="129"><a href="#129">129</a></td></tr
><tr id="gr_svn379_130"

><td id="130"><a href="#130">130</a></td></tr
><tr id="gr_svn379_131"

><td id="131"><a href="#131">131</a></td></tr
><tr id="gr_svn379_132"

><td id="132"><a href="#132">132</a></td></tr
><tr id="gr_svn379_133"

><td id="133"><a href="#133">133</a></td></tr
><tr id="gr_svn379_134"

><td id="134"><a href="#134">134</a></td></tr
><tr id="gr_svn379_135"

><td id="135"><a href="#135">135</a></td></tr
><tr id="gr_svn379_136"

><td id="136"><a href="#136">136</a></td></tr
><tr id="gr_svn379_137"

><td id="137"><a href="#137">137</a></td></tr
><tr id="gr_svn379_138"

><td id="138"><a href="#138">138</a></td></tr
><tr id="gr_svn379_139"

><td id="139"><a href="#139">139</a></td></tr
><tr id="gr_svn379_140"

><td id="140"><a href="#140">140</a></td></tr
><tr id="gr_svn379_141"

><td id="141"><a href="#141">141</a></td></tr
><tr id="gr_svn379_142"

><td id="142"><a href="#142">142</a></td></tr
><tr id="gr_svn379_143"

><td id="143"><a href="#143">143</a></td></tr
><tr id="gr_svn379_144"

><td id="144"><a href="#144">144</a></td></tr
><tr id="gr_svn379_145"

><td id="145"><a href="#145">145</a></td></tr
><tr id="gr_svn379_146"

><td id="146"><a href="#146">146</a></td></tr
><tr id="gr_svn379_147"

><td id="147"><a href="#147">147</a></td></tr
><tr id="gr_svn379_148"

><td id="148"><a href="#148">148</a></td></tr
><tr id="gr_svn379_149"

><td id="149"><a href="#149">149</a></td></tr
><tr id="gr_svn379_150"

><td id="150"><a href="#150">150</a></td></tr
><tr id="gr_svn379_151"

><td id="151"><a href="#151">151</a></td></tr
><tr id="gr_svn379_152"

><td id="152"><a href="#152">152</a></td></tr
><tr id="gr_svn379_153"

><td id="153"><a href="#153">153</a></td></tr
><tr id="gr_svn379_154"

><td id="154"><a href="#154">154</a></td></tr
><tr id="gr_svn379_155"

><td id="155"><a href="#155">155</a></td></tr
><tr id="gr_svn379_156"

><td id="156"><a href="#156">156</a></td></tr
><tr id="gr_svn379_157"

><td id="157"><a href="#157">157</a></td></tr
><tr id="gr_svn379_158"

><td id="158"><a href="#158">158</a></td></tr
><tr id="gr_svn379_159"

><td id="159"><a href="#159">159</a></td></tr
><tr id="gr_svn379_160"

><td id="160"><a href="#160">160</a></td></tr
><tr id="gr_svn379_161"

><td id="161"><a href="#161">161</a></td></tr
><tr id="gr_svn379_162"

><td id="162"><a href="#162">162</a></td></tr
><tr id="gr_svn379_163"

><td id="163"><a href="#163">163</a></td></tr
><tr id="gr_svn379_164"

><td id="164"><a href="#164">164</a></td></tr
><tr id="gr_svn379_165"

><td id="165"><a href="#165">165</a></td></tr
><tr id="gr_svn379_166"

><td id="166"><a href="#166">166</a></td></tr
><tr id="gr_svn379_167"

><td id="167"><a href="#167">167</a></td></tr
><tr id="gr_svn379_168"

><td id="168"><a href="#168">168</a></td></tr
><tr id="gr_svn379_169"

><td id="169"><a href="#169">169</a></td></tr
><tr id="gr_svn379_170"

><td id="170"><a href="#170">170</a></td></tr
><tr id="gr_svn379_171"

><td id="171"><a href="#171">171</a></td></tr
><tr id="gr_svn379_172"

><td id="172"><a href="#172">172</a></td></tr
><tr id="gr_svn379_173"

><td id="173"><a href="#173">173</a></td></tr
><tr id="gr_svn379_174"

><td id="174"><a href="#174">174</a></td></tr
><tr id="gr_svn379_175"

><td id="175"><a href="#175">175</a></td></tr
><tr id="gr_svn379_176"

><td id="176"><a href="#176">176</a></td></tr
><tr id="gr_svn379_177"

><td id="177"><a href="#177">177</a></td></tr
><tr id="gr_svn379_178"

><td id="178"><a href="#178">178</a></td></tr
><tr id="gr_svn379_179"

><td id="179"><a href="#179">179</a></td></tr
><tr id="gr_svn379_180"

><td id="180"><a href="#180">180</a></td></tr
><tr id="gr_svn379_181"

><td id="181"><a href="#181">181</a></td></tr
><tr id="gr_svn379_182"

><td id="182"><a href="#182">182</a></td></tr
><tr id="gr_svn379_183"

><td id="183"><a href="#183">183</a></td></tr
><tr id="gr_svn379_184"

><td id="184"><a href="#184">184</a></td></tr
><tr id="gr_svn379_185"

><td id="185"><a href="#185">185</a></td></tr
><tr id="gr_svn379_186"

><td id="186"><a href="#186">186</a></td></tr
><tr id="gr_svn379_187"

><td id="187"><a href="#187">187</a></td></tr
><tr id="gr_svn379_188"

><td id="188"><a href="#188">188</a></td></tr
><tr id="gr_svn379_189"

><td id="189"><a href="#189">189</a></td></tr
><tr id="gr_svn379_190"

><td id="190"><a href="#190">190</a></td></tr
><tr id="gr_svn379_191"

><td id="191"><a href="#191">191</a></td></tr
><tr id="gr_svn379_192"

><td id="192"><a href="#192">192</a></td></tr
><tr id="gr_svn379_193"

><td id="193"><a href="#193">193</a></td></tr
><tr id="gr_svn379_194"

><td id="194"><a href="#194">194</a></td></tr
><tr id="gr_svn379_195"

><td id="195"><a href="#195">195</a></td></tr
><tr id="gr_svn379_196"

><td id="196"><a href="#196">196</a></td></tr
><tr id="gr_svn379_197"

><td id="197"><a href="#197">197</a></td></tr
><tr id="gr_svn379_198"

><td id="198"><a href="#198">198</a></td></tr
><tr id="gr_svn379_199"

><td id="199"><a href="#199">199</a></td></tr
><tr id="gr_svn379_200"

><td id="200"><a href="#200">200</a></td></tr
><tr id="gr_svn379_201"

><td id="201"><a href="#201">201</a></td></tr
><tr id="gr_svn379_202"

><td id="202"><a href="#202">202</a></td></tr
><tr id="gr_svn379_203"

><td id="203"><a href="#203">203</a></td></tr
><tr id="gr_svn379_204"

><td id="204"><a href="#204">204</a></td></tr
><tr id="gr_svn379_205"

><td id="205"><a href="#205">205</a></td></tr
><tr id="gr_svn379_206"

><td id="206"><a href="#206">206</a></td></tr
><tr id="gr_svn379_207"

><td id="207"><a href="#207">207</a></td></tr
><tr id="gr_svn379_208"

><td id="208"><a href="#208">208</a></td></tr
><tr id="gr_svn379_209"

><td id="209"><a href="#209">209</a></td></tr
><tr id="gr_svn379_210"

><td id="210"><a href="#210">210</a></td></tr
><tr id="gr_svn379_211"

><td id="211"><a href="#211">211</a></td></tr
><tr id="gr_svn379_212"

><td id="212"><a href="#212">212</a></td></tr
><tr id="gr_svn379_213"

><td id="213"><a href="#213">213</a></td></tr
><tr id="gr_svn379_214"

><td id="214"><a href="#214">214</a></td></tr
><tr id="gr_svn379_215"

><td id="215"><a href="#215">215</a></td></tr
><tr id="gr_svn379_216"

><td id="216"><a href="#216">216</a></td></tr
><tr id="gr_svn379_217"

><td id="217"><a href="#217">217</a></td></tr
><tr id="gr_svn379_218"

><td id="218"><a href="#218">218</a></td></tr
><tr id="gr_svn379_219"

><td id="219"><a href="#219">219</a></td></tr
><tr id="gr_svn379_220"

><td id="220"><a href="#220">220</a></td></tr
><tr id="gr_svn379_221"

><td id="221"><a href="#221">221</a></td></tr
><tr id="gr_svn379_222"

><td id="222"><a href="#222">222</a></td></tr
></table></pre>

<pre><table width="100%" id="nums_table_1"><tr id="gr_svn379_223"

><td id="223"><a href="#223">223</a></td></tr
><tr id="gr_svn379_224"

><td id="224"><a href="#224">224</a></td></tr
><tr id="gr_svn379_225"

><td id="225"><a href="#225">225</a></td></tr
><tr id="gr_svn379_226"

><td id="226"><a href="#226">226</a></td></tr
><tr id="gr_svn379_227"

><td id="227"><a href="#227">227</a></td></tr
><tr id="gr_svn379_228"

><td id="228"><a href="#228">228</a></td></tr
><tr id="gr_svn379_229"

><td id="229"><a href="#229">229</a></td></tr
><tr id="gr_svn379_230"

><td id="230"><a href="#230">230</a></td></tr
><tr id="gr_svn379_231"

><td id="231"><a href="#231">231</a></td></tr
><tr id="gr_svn379_232"

><td id="232"><a href="#232">232</a></td></tr
><tr id="gr_svn379_233"

><td id="233"><a href="#233">233</a></td></tr
><tr id="gr_svn379_234"

><td id="234"><a href="#234">234</a></td></tr
><tr id="gr_svn379_235"

><td id="235"><a href="#235">235</a></td></tr
><tr id="gr_svn379_236"

><td id="236"><a href="#236">236</a></td></tr
><tr id="gr_svn379_237"

><td id="237"><a href="#237">237</a></td></tr
><tr id="gr_svn379_238"

><td id="238"><a href="#238">238</a></td></tr
><tr id="gr_svn379_239"

><td id="239"><a href="#239">239</a></td></tr
><tr id="gr_svn379_240"

><td id="240"><a href="#240">240</a></td></tr
><tr id="gr_svn379_241"

><td id="241"><a href="#241">241</a></td></tr
><tr id="gr_svn379_242"

><td id="242"><a href="#242">242</a></td></tr
><tr id="gr_svn379_243"

><td id="243"><a href="#243">243</a></td></tr
><tr id="gr_svn379_244"

><td id="244"><a href="#244">244</a></td></tr
><tr id="gr_svn379_245"

><td id="245"><a href="#245">245</a></td></tr
><tr id="gr_svn379_246"

><td id="246"><a href="#246">246</a></td></tr
><tr id="gr_svn379_247"

><td id="247"><a href="#247">247</a></td></tr
><tr id="gr_svn379_248"

><td id="248"><a href="#248">248</a></td></tr
><tr id="gr_svn379_249"

><td id="249"><a href="#249">249</a></td></tr
><tr id="gr_svn379_250"

><td id="250"><a href="#250">250</a></td></tr
><tr id="gr_svn379_251"

><td id="251"><a href="#251">251</a></td></tr
><tr id="gr_svn379_252"

><td id="252"><a href="#252">252</a></td></tr
><tr id="gr_svn379_253"

><td id="253"><a href="#253">253</a></td></tr
><tr id="gr_svn379_254"

><td id="254"><a href="#254">254</a></td></tr
><tr id="gr_svn379_255"

><td id="255"><a href="#255">255</a></td></tr
><tr id="gr_svn379_256"

><td id="256"><a href="#256">256</a></td></tr
><tr id="gr_svn379_257"

><td id="257"><a href="#257">257</a></td></tr
><tr id="gr_svn379_258"

><td id="258"><a href="#258">258</a></td></tr
><tr id="gr_svn379_259"

><td id="259"><a href="#259">259</a></td></tr
><tr id="gr_svn379_260"

><td id="260"><a href="#260">260</a></td></tr
><tr id="gr_svn379_261"

><td id="261"><a href="#261">261</a></td></tr
><tr id="gr_svn379_262"

><td id="262"><a href="#262">262</a></td></tr
><tr id="gr_svn379_263"

><td id="263"><a href="#263">263</a></td></tr
><tr id="gr_svn379_264"

><td id="264"><a href="#264">264</a></td></tr
><tr id="gr_svn379_265"

><td id="265"><a href="#265">265</a></td></tr
><tr id="gr_svn379_266"

><td id="266"><a href="#266">266</a></td></tr
><tr id="gr_svn379_267"

><td id="267"><a href="#267">267</a></td></tr
><tr id="gr_svn379_268"

><td id="268"><a href="#268">268</a></td></tr
><tr id="gr_svn379_269"

><td id="269"><a href="#269">269</a></td></tr
><tr id="gr_svn379_270"

><td id="270"><a href="#270">270</a></td></tr
><tr id="gr_svn379_271"

><td id="271"><a href="#271">271</a></td></tr
><tr id="gr_svn379_272"

><td id="272"><a href="#272">272</a></td></tr
><tr id="gr_svn379_273"

><td id="273"><a href="#273">273</a></td></tr
><tr id="gr_svn379_274"

><td id="274"><a href="#274">274</a></td></tr
><tr id="gr_svn379_275"

><td id="275"><a href="#275">275</a></td></tr
><tr id="gr_svn379_276"

><td id="276"><a href="#276">276</a></td></tr
><tr id="gr_svn379_277"

><td id="277"><a href="#277">277</a></td></tr
><tr id="gr_svn379_278"

><td id="278"><a href="#278">278</a></td></tr
><tr id="gr_svn379_279"

><td id="279"><a href="#279">279</a></td></tr
><tr id="gr_svn379_280"

><td id="280"><a href="#280">280</a></td></tr
><tr id="gr_svn379_281"

><td id="281"><a href="#281">281</a></td></tr
><tr id="gr_svn379_282"

><td id="282"><a href="#282">282</a></td></tr
><tr id="gr_svn379_283"

><td id="283"><a href="#283">283</a></td></tr
><tr id="gr_svn379_284"

><td id="284"><a href="#284">284</a></td></tr
><tr id="gr_svn379_285"

><td id="285"><a href="#285">285</a></td></tr
><tr id="gr_svn379_286"

><td id="286"><a href="#286">286</a></td></tr
><tr id="gr_svn379_287"

><td id="287"><a href="#287">287</a></td></tr
><tr id="gr_svn379_288"

><td id="288"><a href="#288">288</a></td></tr
><tr id="gr_svn379_289"

><td id="289"><a href="#289">289</a></td></tr
><tr id="gr_svn379_290"

><td id="290"><a href="#290">290</a></td></tr
><tr id="gr_svn379_291"

><td id="291"><a href="#291">291</a></td></tr
><tr id="gr_svn379_292"

><td id="292"><a href="#292">292</a></td></tr
><tr id="gr_svn379_293"

><td id="293"><a href="#293">293</a></td></tr
><tr id="gr_svn379_294"

><td id="294"><a href="#294">294</a></td></tr
><tr id="gr_svn379_295"

><td id="295"><a href="#295">295</a></td></tr
><tr id="gr_svn379_296"

><td id="296"><a href="#296">296</a></td></tr
><tr id="gr_svn379_297"

><td id="297"><a href="#297">297</a></td></tr
><tr id="gr_svn379_298"

><td id="298"><a href="#298">298</a></td></tr
><tr id="gr_svn379_299"

><td id="299"><a href="#299">299</a></td></tr
><tr id="gr_svn379_300"

><td id="300"><a href="#300">300</a></td></tr
><tr id="gr_svn379_301"

><td id="301"><a href="#301">301</a></td></tr
><tr id="gr_svn379_302"

><td id="302"><a href="#302">302</a></td></tr
><tr id="gr_svn379_303"

><td id="303"><a href="#303">303</a></td></tr
><tr id="gr_svn379_304"

><td id="304"><a href="#304">304</a></td></tr
><tr id="gr_svn379_305"

><td id="305"><a href="#305">305</a></td></tr
><tr id="gr_svn379_306"

><td id="306"><a href="#306">306</a></td></tr
><tr id="gr_svn379_307"

><td id="307"><a href="#307">307</a></td></tr
><tr id="gr_svn379_308"

><td id="308"><a href="#308">308</a></td></tr
><tr id="gr_svn379_309"

><td id="309"><a href="#309">309</a></td></tr
><tr id="gr_svn379_310"

><td id="310"><a href="#310">310</a></td></tr
><tr id="gr_svn379_311"

><td id="311"><a href="#311">311</a></td></tr
><tr id="gr_svn379_312"

><td id="312"><a href="#312">312</a></td></tr
><tr id="gr_svn379_313"

><td id="313"><a href="#313">313</a></td></tr
><tr id="gr_svn379_314"

><td id="314"><a href="#314">314</a></td></tr
><tr id="gr_svn379_315"

><td id="315"><a href="#315">315</a></td></tr
><tr id="gr_svn379_316"

><td id="316"><a href="#316">316</a></td></tr
><tr id="gr_svn379_317"

><td id="317"><a href="#317">317</a></td></tr
><tr id="gr_svn379_318"

><td id="318"><a href="#318">318</a></td></tr
><tr id="gr_svn379_319"

><td id="319"><a href="#319">319</a></td></tr
><tr id="gr_svn379_320"

><td id="320"><a href="#320">320</a></td></tr
><tr id="gr_svn379_321"

><td id="321"><a href="#321">321</a></td></tr
><tr id="gr_svn379_322"

><td id="322"><a href="#322">322</a></td></tr
><tr id="gr_svn379_323"

><td id="323"><a href="#323">323</a></td></tr
><tr id="gr_svn379_324"

><td id="324"><a href="#324">324</a></td></tr
><tr id="gr_svn379_325"

><td id="325"><a href="#325">325</a></td></tr
><tr id="gr_svn379_326"

><td id="326"><a href="#326">326</a></td></tr
><tr id="gr_svn379_327"

><td id="327"><a href="#327">327</a></td></tr
><tr id="gr_svn379_328"

><td id="328"><a href="#328">328</a></td></tr
><tr id="gr_svn379_329"

><td id="329"><a href="#329">329</a></td></tr
><tr id="gr_svn379_330"

><td id="330"><a href="#330">330</a></td></tr
><tr id="gr_svn379_331"

><td id="331"><a href="#331">331</a></td></tr
><tr id="gr_svn379_332"

><td id="332"><a href="#332">332</a></td></tr
><tr id="gr_svn379_333"

><td id="333"><a href="#333">333</a></td></tr
><tr id="gr_svn379_334"

><td id="334"><a href="#334">334</a></td></tr
><tr id="gr_svn379_335"

><td id="335"><a href="#335">335</a></td></tr
><tr id="gr_svn379_336"

><td id="336"><a href="#336">336</a></td></tr
><tr id="gr_svn379_337"

><td id="337"><a href="#337">337</a></td></tr
><tr id="gr_svn379_338"

><td id="338"><a href="#338">338</a></td></tr
><tr id="gr_svn379_339"

><td id="339"><a href="#339">339</a></td></tr
><tr id="gr_svn379_340"

><td id="340"><a href="#340">340</a></td></tr
><tr id="gr_svn379_341"

><td id="341"><a href="#341">341</a></td></tr
><tr id="gr_svn379_342"

><td id="342"><a href="#342">342</a></td></tr
><tr id="gr_svn379_343"

><td id="343"><a href="#343">343</a></td></tr
><tr id="gr_svn379_344"

><td id="344"><a href="#344">344</a></td></tr
><tr id="gr_svn379_345"

><td id="345"><a href="#345">345</a></td></tr
><tr id="gr_svn379_346"

><td id="346"><a href="#346">346</a></td></tr
><tr id="gr_svn379_347"

><td id="347"><a href="#347">347</a></td></tr
><tr id="gr_svn379_348"

><td id="348"><a href="#348">348</a></td></tr
><tr id="gr_svn379_349"

><td id="349"><a href="#349">349</a></td></tr
><tr id="gr_svn379_350"

><td id="350"><a href="#350">350</a></td></tr
><tr id="gr_svn379_351"

><td id="351"><a href="#351">351</a></td></tr
><tr id="gr_svn379_352"

><td id="352"><a href="#352">352</a></td></tr
><tr id="gr_svn379_353"

><td id="353"><a href="#353">353</a></td></tr
><tr id="gr_svn379_354"

><td id="354"><a href="#354">354</a></td></tr
><tr id="gr_svn379_355"

><td id="355"><a href="#355">355</a></td></tr
><tr id="gr_svn379_356"

><td id="356"><a href="#356">356</a></td></tr
><tr id="gr_svn379_357"

><td id="357"><a href="#357">357</a></td></tr
><tr id="gr_svn379_358"

><td id="358"><a href="#358">358</a></td></tr
><tr id="gr_svn379_359"

><td id="359"><a href="#359">359</a></td></tr
><tr id="gr_svn379_360"

><td id="360"><a href="#360">360</a></td></tr
><tr id="gr_svn379_361"

><td id="361"><a href="#361">361</a></td></tr
><tr id="gr_svn379_362"

><td id="362"><a href="#362">362</a></td></tr
><tr id="gr_svn379_363"

><td id="363"><a href="#363">363</a></td></tr
><tr id="gr_svn379_364"

><td id="364"><a href="#364">364</a></td></tr
><tr id="gr_svn379_365"

><td id="365"><a href="#365">365</a></td></tr
><tr id="gr_svn379_366"

><td id="366"><a href="#366">366</a></td></tr
><tr id="gr_svn379_367"

><td id="367"><a href="#367">367</a></td></tr
><tr id="gr_svn379_368"

><td id="368"><a href="#368">368</a></td></tr
><tr id="gr_svn379_369"

><td id="369"><a href="#369">369</a></td></tr
><tr id="gr_svn379_370"

><td id="370"><a href="#370">370</a></td></tr
><tr id="gr_svn379_371"

><td id="371"><a href="#371">371</a></td></tr
><tr id="gr_svn379_372"

><td id="372"><a href="#372">372</a></td></tr
><tr id="gr_svn379_373"

><td id="373"><a href="#373">373</a></td></tr
><tr id="gr_svn379_374"

><td id="374"><a href="#374">374</a></td></tr
><tr id="gr_svn379_375"

><td id="375"><a href="#375">375</a></td></tr
><tr id="gr_svn379_376"

><td id="376"><a href="#376">376</a></td></tr
><tr id="gr_svn379_377"

><td id="377"><a href="#377">377</a></td></tr
><tr id="gr_svn379_378"

><td id="378"><a href="#378">378</a></td></tr
><tr id="gr_svn379_379"

><td id="379"><a href="#379">379</a></td></tr
><tr id="gr_svn379_380"

><td id="380"><a href="#380">380</a></td></tr
><tr id="gr_svn379_381"

><td id="381"><a href="#381">381</a></td></tr
><tr id="gr_svn379_382"

><td id="382"><a href="#382">382</a></td></tr
><tr id="gr_svn379_383"

><td id="383"><a href="#383">383</a></td></tr
><tr id="gr_svn379_384"

><td id="384"><a href="#384">384</a></td></tr
><tr id="gr_svn379_385"

><td id="385"><a href="#385">385</a></td></tr
><tr id="gr_svn379_386"

><td id="386"><a href="#386">386</a></td></tr
><tr id="gr_svn379_387"

><td id="387"><a href="#387">387</a></td></tr
><tr id="gr_svn379_388"

><td id="388"><a href="#388">388</a></td></tr
><tr id="gr_svn379_389"

><td id="389"><a href="#389">389</a></td></tr
><tr id="gr_svn379_390"

><td id="390"><a href="#390">390</a></td></tr
><tr id="gr_svn379_391"

><td id="391"><a href="#391">391</a></td></tr
><tr id="gr_svn379_392"

><td id="392"><a href="#392">392</a></td></tr
><tr id="gr_svn379_393"

><td id="393"><a href="#393">393</a></td></tr
><tr id="gr_svn379_394"

><td id="394"><a href="#394">394</a></td></tr
><tr id="gr_svn379_395"

><td id="395"><a href="#395">395</a></td></tr
><tr id="gr_svn379_396"

><td id="396"><a href="#396">396</a></td></tr
><tr id="gr_svn379_397"

><td id="397"><a href="#397">397</a></td></tr
><tr id="gr_svn379_398"

><td id="398"><a href="#398">398</a></td></tr
><tr id="gr_svn379_399"

><td id="399"><a href="#399">399</a></td></tr
><tr id="gr_svn379_400"

><td id="400"><a href="#400">400</a></td></tr
><tr id="gr_svn379_401"

><td id="401"><a href="#401">401</a></td></tr
><tr id="gr_svn379_402"

><td id="402"><a href="#402">402</a></td></tr
><tr id="gr_svn379_403"

><td id="403"><a href="#403">403</a></td></tr
><tr id="gr_svn379_404"

><td id="404"><a href="#404">404</a></td></tr
><tr id="gr_svn379_405"

><td id="405"><a href="#405">405</a></td></tr
><tr id="gr_svn379_406"

><td id="406"><a href="#406">406</a></td></tr
><tr id="gr_svn379_407"

><td id="407"><a href="#407">407</a></td></tr
><tr id="gr_svn379_408"

><td id="408"><a href="#408">408</a></td></tr
><tr id="gr_svn379_409"

><td id="409"><a href="#409">409</a></td></tr
><tr id="gr_svn379_410"

><td id="410"><a href="#410">410</a></td></tr
><tr id="gr_svn379_411"

><td id="411"><a href="#411">411</a></td></tr
><tr id="gr_svn379_412"

><td id="412"><a href="#412">412</a></td></tr
><tr id="gr_svn379_413"

><td id="413"><a href="#413">413</a></td></tr
><tr id="gr_svn379_414"

><td id="414"><a href="#414">414</a></td></tr
><tr id="gr_svn379_415"

><td id="415"><a href="#415">415</a></td></tr
><tr id="gr_svn379_416"

><td id="416"><a href="#416">416</a></td></tr
><tr id="gr_svn379_417"

><td id="417"><a href="#417">417</a></td></tr
><tr id="gr_svn379_418"

><td id="418"><a href="#418">418</a></td></tr
><tr id="gr_svn379_419"

><td id="419"><a href="#419">419</a></td></tr
><tr id="gr_svn379_420"

><td id="420"><a href="#420">420</a></td></tr
><tr id="gr_svn379_421"

><td id="421"><a href="#421">421</a></td></tr
><tr id="gr_svn379_422"

><td id="422"><a href="#422">422</a></td></tr
><tr id="gr_svn379_423"

><td id="423"><a href="#423">423</a></td></tr
><tr id="gr_svn379_424"

><td id="424"><a href="#424">424</a></td></tr
><tr id="gr_svn379_425"

><td id="425"><a href="#425">425</a></td></tr
><tr id="gr_svn379_426"

><td id="426"><a href="#426">426</a></td></tr
><tr id="gr_svn379_427"

><td id="427"><a href="#427">427</a></td></tr
><tr id="gr_svn379_428"

><td id="428"><a href="#428">428</a></td></tr
><tr id="gr_svn379_429"

><td id="429"><a href="#429">429</a></td></tr
><tr id="gr_svn379_430"

><td id="430"><a href="#430">430</a></td></tr
><tr id="gr_svn379_431"

><td id="431"><a href="#431">431</a></td></tr
><tr id="gr_svn379_432"

><td id="432"><a href="#432">432</a></td></tr
><tr id="gr_svn379_433"

><td id="433"><a href="#433">433</a></td></tr
><tr id="gr_svn379_434"

><td id="434"><a href="#434">434</a></td></tr
></table></pre>

<pre><table width="100%" id="nums_table_2"><tr id="gr_svn379_435"

><td id="435"><a href="#435">435</a></td></tr
><tr id="gr_svn379_436"

><td id="436"><a href="#436">436</a></td></tr
><tr id="gr_svn379_437"

><td id="437"><a href="#437">437</a></td></tr
><tr id="gr_svn379_438"

><td id="438"><a href="#438">438</a></td></tr
><tr id="gr_svn379_439"

><td id="439"><a href="#439">439</a></td></tr
><tr id="gr_svn379_440"

><td id="440"><a href="#440">440</a></td></tr
><tr id="gr_svn379_441"

><td id="441"><a href="#441">441</a></td></tr
><tr id="gr_svn379_442"

><td id="442"><a href="#442">442</a></td></tr
><tr id="gr_svn379_443"

><td id="443"><a href="#443">443</a></td></tr
><tr id="gr_svn379_444"

><td id="444"><a href="#444">444</a></td></tr
><tr id="gr_svn379_445"

><td id="445"><a href="#445">445</a></td></tr
><tr id="gr_svn379_446"

><td id="446"><a href="#446">446</a></td></tr
><tr id="gr_svn379_447"

><td id="447"><a href="#447">447</a></td></tr
><tr id="gr_svn379_448"

><td id="448"><a href="#448">448</a></td></tr
><tr id="gr_svn379_449"

><td id="449"><a href="#449">449</a></td></tr
><tr id="gr_svn379_450"

><td id="450"><a href="#450">450</a></td></tr
><tr id="gr_svn379_451"

><td id="451"><a href="#451">451</a></td></tr
><tr id="gr_svn379_452"

><td id="452"><a href="#452">452</a></td></tr
><tr id="gr_svn379_453"

><td id="453"><a href="#453">453</a></td></tr
><tr id="gr_svn379_454"

><td id="454"><a href="#454">454</a></td></tr
><tr id="gr_svn379_455"

><td id="455"><a href="#455">455</a></td></tr
><tr id="gr_svn379_456"

><td id="456"><a href="#456">456</a></td></tr
><tr id="gr_svn379_457"

><td id="457"><a href="#457">457</a></td></tr
><tr id="gr_svn379_458"

><td id="458"><a href="#458">458</a></td></tr
><tr id="gr_svn379_459"

><td id="459"><a href="#459">459</a></td></tr
><tr id="gr_svn379_460"

><td id="460"><a href="#460">460</a></td></tr
><tr id="gr_svn379_461"

><td id="461"><a href="#461">461</a></td></tr
><tr id="gr_svn379_462"

><td id="462"><a href="#462">462</a></td></tr
><tr id="gr_svn379_463"

><td id="463"><a href="#463">463</a></td></tr
><tr id="gr_svn379_464"

><td id="464"><a href="#464">464</a></td></tr
><tr id="gr_svn379_465"

><td id="465"><a href="#465">465</a></td></tr
><tr id="gr_svn379_466"

><td id="466"><a href="#466">466</a></td></tr
><tr id="gr_svn379_467"

><td id="467"><a href="#467">467</a></td></tr
><tr id="gr_svn379_468"

><td id="468"><a href="#468">468</a></td></tr
><tr id="gr_svn379_469"

><td id="469"><a href="#469">469</a></td></tr
><tr id="gr_svn379_470"

><td id="470"><a href="#470">470</a></td></tr
><tr id="gr_svn379_471"

><td id="471"><a href="#471">471</a></td></tr
><tr id="gr_svn379_472"

><td id="472"><a href="#472">472</a></td></tr
><tr id="gr_svn379_473"

><td id="473"><a href="#473">473</a></td></tr
><tr id="gr_svn379_474"

><td id="474"><a href="#474">474</a></td></tr
><tr id="gr_svn379_475"

><td id="475"><a href="#475">475</a></td></tr
><tr id="gr_svn379_476"

><td id="476"><a href="#476">476</a></td></tr
><tr id="gr_svn379_477"

><td id="477"><a href="#477">477</a></td></tr
><tr id="gr_svn379_478"

><td id="478"><a href="#478">478</a></td></tr
><tr id="gr_svn379_479"

><td id="479"><a href="#479">479</a></td></tr
><tr id="gr_svn379_480"

><td id="480"><a href="#480">480</a></td></tr
><tr id="gr_svn379_481"

><td id="481"><a href="#481">481</a></td></tr
><tr id="gr_svn379_482"

><td id="482"><a href="#482">482</a></td></tr
><tr id="gr_svn379_483"

><td id="483"><a href="#483">483</a></td></tr
><tr id="gr_svn379_484"

><td id="484"><a href="#484">484</a></td></tr
><tr id="gr_svn379_485"

><td id="485"><a href="#485">485</a></td></tr
><tr id="gr_svn379_486"

><td id="486"><a href="#486">486</a></td></tr
><tr id="gr_svn379_487"

><td id="487"><a href="#487">487</a></td></tr
><tr id="gr_svn379_488"

><td id="488"><a href="#488">488</a></td></tr
><tr id="gr_svn379_489"

><td id="489"><a href="#489">489</a></td></tr
><tr id="gr_svn379_490"

><td id="490"><a href="#490">490</a></td></tr
><tr id="gr_svn379_491"

><td id="491"><a href="#491">491</a></td></tr
><tr id="gr_svn379_492"

><td id="492"><a href="#492">492</a></td></tr
><tr id="gr_svn379_493"

><td id="493"><a href="#493">493</a></td></tr
><tr id="gr_svn379_494"

><td id="494"><a href="#494">494</a></td></tr
><tr id="gr_svn379_495"

><td id="495"><a href="#495">495</a></td></tr
><tr id="gr_svn379_496"

><td id="496"><a href="#496">496</a></td></tr
><tr id="gr_svn379_497"

><td id="497"><a href="#497">497</a></td></tr
><tr id="gr_svn379_498"

><td id="498"><a href="#498">498</a></td></tr
><tr id="gr_svn379_499"

><td id="499"><a href="#499">499</a></td></tr
><tr id="gr_svn379_500"

><td id="500"><a href="#500">500</a></td></tr
><tr id="gr_svn379_501"

><td id="501"><a href="#501">501</a></td></tr
><tr id="gr_svn379_502"

><td id="502"><a href="#502">502</a></td></tr
><tr id="gr_svn379_503"

><td id="503"><a href="#503">503</a></td></tr
><tr id="gr_svn379_504"

><td id="504"><a href="#504">504</a></td></tr
><tr id="gr_svn379_505"

><td id="505"><a href="#505">505</a></td></tr
><tr id="gr_svn379_506"

><td id="506"><a href="#506">506</a></td></tr
><tr id="gr_svn379_507"

><td id="507"><a href="#507">507</a></td></tr
><tr id="gr_svn379_508"

><td id="508"><a href="#508">508</a></td></tr
><tr id="gr_svn379_509"

><td id="509"><a href="#509">509</a></td></tr
><tr id="gr_svn379_510"

><td id="510"><a href="#510">510</a></td></tr
><tr id="gr_svn379_511"

><td id="511"><a href="#511">511</a></td></tr
><tr id="gr_svn379_512"

><td id="512"><a href="#512">512</a></td></tr
><tr id="gr_svn379_513"

><td id="513"><a href="#513">513</a></td></tr
><tr id="gr_svn379_514"

><td id="514"><a href="#514">514</a></td></tr
><tr id="gr_svn379_515"

><td id="515"><a href="#515">515</a></td></tr
><tr id="gr_svn379_516"

><td id="516"><a href="#516">516</a></td></tr
><tr id="gr_svn379_517"

><td id="517"><a href="#517">517</a></td></tr
><tr id="gr_svn379_518"

><td id="518"><a href="#518">518</a></td></tr
><tr id="gr_svn379_519"

><td id="519"><a href="#519">519</a></td></tr
><tr id="gr_svn379_520"

><td id="520"><a href="#520">520</a></td></tr
><tr id="gr_svn379_521"

><td id="521"><a href="#521">521</a></td></tr
><tr id="gr_svn379_522"

><td id="522"><a href="#522">522</a></td></tr
><tr id="gr_svn379_523"

><td id="523"><a href="#523">523</a></td></tr
><tr id="gr_svn379_524"

><td id="524"><a href="#524">524</a></td></tr
><tr id="gr_svn379_525"

><td id="525"><a href="#525">525</a></td></tr
><tr id="gr_svn379_526"

><td id="526"><a href="#526">526</a></td></tr
><tr id="gr_svn379_527"

><td id="527"><a href="#527">527</a></td></tr
><tr id="gr_svn379_528"

><td id="528"><a href="#528">528</a></td></tr
><tr id="gr_svn379_529"

><td id="529"><a href="#529">529</a></td></tr
><tr id="gr_svn379_530"

><td id="530"><a href="#530">530</a></td></tr
><tr id="gr_svn379_531"

><td id="531"><a href="#531">531</a></td></tr
><tr id="gr_svn379_532"

><td id="532"><a href="#532">532</a></td></tr
><tr id="gr_svn379_533"

><td id="533"><a href="#533">533</a></td></tr
><tr id="gr_svn379_534"

><td id="534"><a href="#534">534</a></td></tr
><tr id="gr_svn379_535"

><td id="535"><a href="#535">535</a></td></tr
><tr id="gr_svn379_536"

><td id="536"><a href="#536">536</a></td></tr
><tr id="gr_svn379_537"

><td id="537"><a href="#537">537</a></td></tr
><tr id="gr_svn379_538"

><td id="538"><a href="#538">538</a></td></tr
><tr id="gr_svn379_539"

><td id="539"><a href="#539">539</a></td></tr
><tr id="gr_svn379_540"

><td id="540"><a href="#540">540</a></td></tr
><tr id="gr_svn379_541"

><td id="541"><a href="#541">541</a></td></tr
><tr id="gr_svn379_542"

><td id="542"><a href="#542">542</a></td></tr
><tr id="gr_svn379_543"

><td id="543"><a href="#543">543</a></td></tr
><tr id="gr_svn379_544"

><td id="544"><a href="#544">544</a></td></tr
><tr id="gr_svn379_545"

><td id="545"><a href="#545">545</a></td></tr
><tr id="gr_svn379_546"

><td id="546"><a href="#546">546</a></td></tr
><tr id="gr_svn379_547"

><td id="547"><a href="#547">547</a></td></tr
><tr id="gr_svn379_548"

><td id="548"><a href="#548">548</a></td></tr
><tr id="gr_svn379_549"

><td id="549"><a href="#549">549</a></td></tr
><tr id="gr_svn379_550"

><td id="550"><a href="#550">550</a></td></tr
><tr id="gr_svn379_551"

><td id="551"><a href="#551">551</a></td></tr
><tr id="gr_svn379_552"

><td id="552"><a href="#552">552</a></td></tr
><tr id="gr_svn379_553"

><td id="553"><a href="#553">553</a></td></tr
><tr id="gr_svn379_554"

><td id="554"><a href="#554">554</a></td></tr
><tr id="gr_svn379_555"

><td id="555"><a href="#555">555</a></td></tr
><tr id="gr_svn379_556"

><td id="556"><a href="#556">556</a></td></tr
><tr id="gr_svn379_557"

><td id="557"><a href="#557">557</a></td></tr
><tr id="gr_svn379_558"

><td id="558"><a href="#558">558</a></td></tr
><tr id="gr_svn379_559"

><td id="559"><a href="#559">559</a></td></tr
><tr id="gr_svn379_560"

><td id="560"><a href="#560">560</a></td></tr
><tr id="gr_svn379_561"

><td id="561"><a href="#561">561</a></td></tr
><tr id="gr_svn379_562"

><td id="562"><a href="#562">562</a></td></tr
><tr id="gr_svn379_563"

><td id="563"><a href="#563">563</a></td></tr
><tr id="gr_svn379_564"

><td id="564"><a href="#564">564</a></td></tr
><tr id="gr_svn379_565"

><td id="565"><a href="#565">565</a></td></tr
><tr id="gr_svn379_566"

><td id="566"><a href="#566">566</a></td></tr
><tr id="gr_svn379_567"

><td id="567"><a href="#567">567</a></td></tr
><tr id="gr_svn379_568"

><td id="568"><a href="#568">568</a></td></tr
><tr id="gr_svn379_569"

><td id="569"><a href="#569">569</a></td></tr
><tr id="gr_svn379_570"

><td id="570"><a href="#570">570</a></td></tr
><tr id="gr_svn379_571"

><td id="571"><a href="#571">571</a></td></tr
><tr id="gr_svn379_572"

><td id="572"><a href="#572">572</a></td></tr
><tr id="gr_svn379_573"

><td id="573"><a href="#573">573</a></td></tr
><tr id="gr_svn379_574"

><td id="574"><a href="#574">574</a></td></tr
><tr id="gr_svn379_575"

><td id="575"><a href="#575">575</a></td></tr
><tr id="gr_svn379_576"

><td id="576"><a href="#576">576</a></td></tr
><tr id="gr_svn379_577"

><td id="577"><a href="#577">577</a></td></tr
><tr id="gr_svn379_578"

><td id="578"><a href="#578">578</a></td></tr
><tr id="gr_svn379_579"

><td id="579"><a href="#579">579</a></td></tr
><tr id="gr_svn379_580"

><td id="580"><a href="#580">580</a></td></tr
><tr id="gr_svn379_581"

><td id="581"><a href="#581">581</a></td></tr
><tr id="gr_svn379_582"

><td id="582"><a href="#582">582</a></td></tr
><tr id="gr_svn379_583"

><td id="583"><a href="#583">583</a></td></tr
><tr id="gr_svn379_584"

><td id="584"><a href="#584">584</a></td></tr
><tr id="gr_svn379_585"

><td id="585"><a href="#585">585</a></td></tr
><tr id="gr_svn379_586"

><td id="586"><a href="#586">586</a></td></tr
><tr id="gr_svn379_587"

><td id="587"><a href="#587">587</a></td></tr
><tr id="gr_svn379_588"

><td id="588"><a href="#588">588</a></td></tr
><tr id="gr_svn379_589"

><td id="589"><a href="#589">589</a></td></tr
><tr id="gr_svn379_590"

><td id="590"><a href="#590">590</a></td></tr
><tr id="gr_svn379_591"

><td id="591"><a href="#591">591</a></td></tr
><tr id="gr_svn379_592"

><td id="592"><a href="#592">592</a></td></tr
><tr id="gr_svn379_593"

><td id="593"><a href="#593">593</a></td></tr
><tr id="gr_svn379_594"

><td id="594"><a href="#594">594</a></td></tr
><tr id="gr_svn379_595"

><td id="595"><a href="#595">595</a></td></tr
><tr id="gr_svn379_596"

><td id="596"><a href="#596">596</a></td></tr
><tr id="gr_svn379_597"

><td id="597"><a href="#597">597</a></td></tr
><tr id="gr_svn379_598"

><td id="598"><a href="#598">598</a></td></tr
><tr id="gr_svn379_599"

><td id="599"><a href="#599">599</a></td></tr
><tr id="gr_svn379_600"

><td id="600"><a href="#600">600</a></td></tr
><tr id="gr_svn379_601"

><td id="601"><a href="#601">601</a></td></tr
><tr id="gr_svn379_602"

><td id="602"><a href="#602">602</a></td></tr
><tr id="gr_svn379_603"

><td id="603"><a href="#603">603</a></td></tr
><tr id="gr_svn379_604"

><td id="604"><a href="#604">604</a></td></tr
><tr id="gr_svn379_605"

><td id="605"><a href="#605">605</a></td></tr
><tr id="gr_svn379_606"

><td id="606"><a href="#606">606</a></td></tr
><tr id="gr_svn379_607"

><td id="607"><a href="#607">607</a></td></tr
><tr id="gr_svn379_608"

><td id="608"><a href="#608">608</a></td></tr
><tr id="gr_svn379_609"

><td id="609"><a href="#609">609</a></td></tr
><tr id="gr_svn379_610"

><td id="610"><a href="#610">610</a></td></tr
><tr id="gr_svn379_611"

><td id="611"><a href="#611">611</a></td></tr
><tr id="gr_svn379_612"

><td id="612"><a href="#612">612</a></td></tr
><tr id="gr_svn379_613"

><td id="613"><a href="#613">613</a></td></tr
><tr id="gr_svn379_614"

><td id="614"><a href="#614">614</a></td></tr
><tr id="gr_svn379_615"

><td id="615"><a href="#615">615</a></td></tr
><tr id="gr_svn379_616"

><td id="616"><a href="#616">616</a></td></tr
><tr id="gr_svn379_617"

><td id="617"><a href="#617">617</a></td></tr
><tr id="gr_svn379_618"

><td id="618"><a href="#618">618</a></td></tr
><tr id="gr_svn379_619"

><td id="619"><a href="#619">619</a></td></tr
><tr id="gr_svn379_620"

><td id="620"><a href="#620">620</a></td></tr
><tr id="gr_svn379_621"

><td id="621"><a href="#621">621</a></td></tr
><tr id="gr_svn379_622"

><td id="622"><a href="#622">622</a></td></tr
><tr id="gr_svn379_623"

><td id="623"><a href="#623">623</a></td></tr
><tr id="gr_svn379_624"

><td id="624"><a href="#624">624</a></td></tr
><tr id="gr_svn379_625"

><td id="625"><a href="#625">625</a></td></tr
><tr id="gr_svn379_626"

><td id="626"><a href="#626">626</a></td></tr
><tr id="gr_svn379_627"

><td id="627"><a href="#627">627</a></td></tr
><tr id="gr_svn379_628"

><td id="628"><a href="#628">628</a></td></tr
><tr id="gr_svn379_629"

><td id="629"><a href="#629">629</a></td></tr
><tr id="gr_svn379_630"

><td id="630"><a href="#630">630</a></td></tr
><tr id="gr_svn379_631"

><td id="631"><a href="#631">631</a></td></tr
><tr id="gr_svn379_632"

><td id="632"><a href="#632">632</a></td></tr
><tr id="gr_svn379_633"

><td id="633"><a href="#633">633</a></td></tr
><tr id="gr_svn379_634"

><td id="634"><a href="#634">634</a></td></tr
><tr id="gr_svn379_635"

><td id="635"><a href="#635">635</a></td></tr
><tr id="gr_svn379_636"

><td id="636"><a href="#636">636</a></td></tr
><tr id="gr_svn379_637"

><td id="637"><a href="#637">637</a></td></tr
><tr id="gr_svn379_638"

><td id="638"><a href="#638">638</a></td></tr
><tr id="gr_svn379_639"

><td id="639"><a href="#639">639</a></td></tr
><tr id="gr_svn379_640"

><td id="640"><a href="#640">640</a></td></tr
><tr id="gr_svn379_641"

><td id="641"><a href="#641">641</a></td></tr
><tr id="gr_svn379_642"

><td id="642"><a href="#642">642</a></td></tr
><tr id="gr_svn379_643"

><td id="643"><a href="#643">643</a></td></tr
><tr id="gr_svn379_644"

><td id="644"><a href="#644">644</a></td></tr
><tr id="gr_svn379_645"

><td id="645"><a href="#645">645</a></td></tr
><tr id="gr_svn379_646"

><td id="646"><a href="#646">646</a></td></tr
><tr id="gr_svn379_647"

><td id="647"><a href="#647">647</a></td></tr
><tr id="gr_svn379_648"

><td id="648"><a href="#648">648</a></td></tr
><tr id="gr_svn379_649"

><td id="649"><a href="#649">649</a></td></tr
><tr id="gr_svn379_650"

><td id="650"><a href="#650">650</a></td></tr
><tr id="gr_svn379_651"

><td id="651"><a href="#651">651</a></td></tr
><tr id="gr_svn379_652"

><td id="652"><a href="#652">652</a></td></tr
><tr id="gr_svn379_653"

><td id="653"><a href="#653">653</a></td></tr
><tr id="gr_svn379_654"

><td id="654"><a href="#654">654</a></td></tr
><tr id="gr_svn379_655"

><td id="655"><a href="#655">655</a></td></tr
><tr id="gr_svn379_656"

><td id="656"><a href="#656">656</a></td></tr
><tr id="gr_svn379_657"

><td id="657"><a href="#657">657</a></td></tr
><tr id="gr_svn379_658"

><td id="658"><a href="#658">658</a></td></tr
></table></pre>

<pre><table width="100%" id="nums_table_3"><tr id="gr_svn379_659"

><td id="659"><a href="#659">659</a></td></tr
><tr id="gr_svn379_660"

><td id="660"><a href="#660">660</a></td></tr
><tr id="gr_svn379_661"

><td id="661"><a href="#661">661</a></td></tr
><tr id="gr_svn379_662"

><td id="662"><a href="#662">662</a></td></tr
><tr id="gr_svn379_663"

><td id="663"><a href="#663">663</a></td></tr
><tr id="gr_svn379_664"

><td id="664"><a href="#664">664</a></td></tr
><tr id="gr_svn379_665"

><td id="665"><a href="#665">665</a></td></tr
><tr id="gr_svn379_666"

><td id="666"><a href="#666">666</a></td></tr
><tr id="gr_svn379_667"

><td id="667"><a href="#667">667</a></td></tr
><tr id="gr_svn379_668"

><td id="668"><a href="#668">668</a></td></tr
><tr id="gr_svn379_669"

><td id="669"><a href="#669">669</a></td></tr
><tr id="gr_svn379_670"

><td id="670"><a href="#670">670</a></td></tr
><tr id="gr_svn379_671"

><td id="671"><a href="#671">671</a></td></tr
><tr id="gr_svn379_672"

><td id="672"><a href="#672">672</a></td></tr
><tr id="gr_svn379_673"

><td id="673"><a href="#673">673</a></td></tr
><tr id="gr_svn379_674"

><td id="674"><a href="#674">674</a></td></tr
><tr id="gr_svn379_675"

><td id="675"><a href="#675">675</a></td></tr
><tr id="gr_svn379_676"

><td id="676"><a href="#676">676</a></td></tr
><tr id="gr_svn379_677"

><td id="677"><a href="#677">677</a></td></tr
><tr id="gr_svn379_678"

><td id="678"><a href="#678">678</a></td></tr
><tr id="gr_svn379_679"

><td id="679"><a href="#679">679</a></td></tr
><tr id="gr_svn379_680"

><td id="680"><a href="#680">680</a></td></tr
><tr id="gr_svn379_681"

><td id="681"><a href="#681">681</a></td></tr
><tr id="gr_svn379_682"

><td id="682"><a href="#682">682</a></td></tr
><tr id="gr_svn379_683"

><td id="683"><a href="#683">683</a></td></tr
><tr id="gr_svn379_684"

><td id="684"><a href="#684">684</a></td></tr
><tr id="gr_svn379_685"

><td id="685"><a href="#685">685</a></td></tr
><tr id="gr_svn379_686"

><td id="686"><a href="#686">686</a></td></tr
><tr id="gr_svn379_687"

><td id="687"><a href="#687">687</a></td></tr
><tr id="gr_svn379_688"

><td id="688"><a href="#688">688</a></td></tr
><tr id="gr_svn379_689"

><td id="689"><a href="#689">689</a></td></tr
><tr id="gr_svn379_690"

><td id="690"><a href="#690">690</a></td></tr
><tr id="gr_svn379_691"

><td id="691"><a href="#691">691</a></td></tr
><tr id="gr_svn379_692"

><td id="692"><a href="#692">692</a></td></tr
><tr id="gr_svn379_693"

><td id="693"><a href="#693">693</a></td></tr
><tr id="gr_svn379_694"

><td id="694"><a href="#694">694</a></td></tr
><tr id="gr_svn379_695"

><td id="695"><a href="#695">695</a></td></tr
><tr id="gr_svn379_696"

><td id="696"><a href="#696">696</a></td></tr
><tr id="gr_svn379_697"

><td id="697"><a href="#697">697</a></td></tr
><tr id="gr_svn379_698"

><td id="698"><a href="#698">698</a></td></tr
><tr id="gr_svn379_699"

><td id="699"><a href="#699">699</a></td></tr
><tr id="gr_svn379_700"

><td id="700"><a href="#700">700</a></td></tr
><tr id="gr_svn379_701"

><td id="701"><a href="#701">701</a></td></tr
><tr id="gr_svn379_702"

><td id="702"><a href="#702">702</a></td></tr
><tr id="gr_svn379_703"

><td id="703"><a href="#703">703</a></td></tr
><tr id="gr_svn379_704"

><td id="704"><a href="#704">704</a></td></tr
><tr id="gr_svn379_705"

><td id="705"><a href="#705">705</a></td></tr
><tr id="gr_svn379_706"

><td id="706"><a href="#706">706</a></td></tr
><tr id="gr_svn379_707"

><td id="707"><a href="#707">707</a></td></tr
><tr id="gr_svn379_708"

><td id="708"><a href="#708">708</a></td></tr
><tr id="gr_svn379_709"

><td id="709"><a href="#709">709</a></td></tr
><tr id="gr_svn379_710"

><td id="710"><a href="#710">710</a></td></tr
><tr id="gr_svn379_711"

><td id="711"><a href="#711">711</a></td></tr
><tr id="gr_svn379_712"

><td id="712"><a href="#712">712</a></td></tr
><tr id="gr_svn379_713"

><td id="713"><a href="#713">713</a></td></tr
><tr id="gr_svn379_714"

><td id="714"><a href="#714">714</a></td></tr
><tr id="gr_svn379_715"

><td id="715"><a href="#715">715</a></td></tr
><tr id="gr_svn379_716"

><td id="716"><a href="#716">716</a></td></tr
><tr id="gr_svn379_717"

><td id="717"><a href="#717">717</a></td></tr
><tr id="gr_svn379_718"

><td id="718"><a href="#718">718</a></td></tr
><tr id="gr_svn379_719"

><td id="719"><a href="#719">719</a></td></tr
><tr id="gr_svn379_720"

><td id="720"><a href="#720">720</a></td></tr
><tr id="gr_svn379_721"

><td id="721"><a href="#721">721</a></td></tr
><tr id="gr_svn379_722"

><td id="722"><a href="#722">722</a></td></tr
><tr id="gr_svn379_723"

><td id="723"><a href="#723">723</a></td></tr
><tr id="gr_svn379_724"

><td id="724"><a href="#724">724</a></td></tr
><tr id="gr_svn379_725"

><td id="725"><a href="#725">725</a></td></tr
><tr id="gr_svn379_726"

><td id="726"><a href="#726">726</a></td></tr
><tr id="gr_svn379_727"

><td id="727"><a href="#727">727</a></td></tr
><tr id="gr_svn379_728"

><td id="728"><a href="#728">728</a></td></tr
><tr id="gr_svn379_729"

><td id="729"><a href="#729">729</a></td></tr
><tr id="gr_svn379_730"

><td id="730"><a href="#730">730</a></td></tr
><tr id="gr_svn379_731"

><td id="731"><a href="#731">731</a></td></tr
><tr id="gr_svn379_732"

><td id="732"><a href="#732">732</a></td></tr
><tr id="gr_svn379_733"

><td id="733"><a href="#733">733</a></td></tr
><tr id="gr_svn379_734"

><td id="734"><a href="#734">734</a></td></tr
><tr id="gr_svn379_735"

><td id="735"><a href="#735">735</a></td></tr
><tr id="gr_svn379_736"

><td id="736"><a href="#736">736</a></td></tr
><tr id="gr_svn379_737"

><td id="737"><a href="#737">737</a></td></tr
><tr id="gr_svn379_738"

><td id="738"><a href="#738">738</a></td></tr
><tr id="gr_svn379_739"

><td id="739"><a href="#739">739</a></td></tr
><tr id="gr_svn379_740"

><td id="740"><a href="#740">740</a></td></tr
><tr id="gr_svn379_741"

><td id="741"><a href="#741">741</a></td></tr
><tr id="gr_svn379_742"

><td id="742"><a href="#742">742</a></td></tr
><tr id="gr_svn379_743"

><td id="743"><a href="#743">743</a></td></tr
><tr id="gr_svn379_744"

><td id="744"><a href="#744">744</a></td></tr
><tr id="gr_svn379_745"

><td id="745"><a href="#745">745</a></td></tr
><tr id="gr_svn379_746"

><td id="746"><a href="#746">746</a></td></tr
><tr id="gr_svn379_747"

><td id="747"><a href="#747">747</a></td></tr
><tr id="gr_svn379_748"

><td id="748"><a href="#748">748</a></td></tr
><tr id="gr_svn379_749"

><td id="749"><a href="#749">749</a></td></tr
><tr id="gr_svn379_750"

><td id="750"><a href="#750">750</a></td></tr
><tr id="gr_svn379_751"

><td id="751"><a href="#751">751</a></td></tr
><tr id="gr_svn379_752"

><td id="752"><a href="#752">752</a></td></tr
><tr id="gr_svn379_753"

><td id="753"><a href="#753">753</a></td></tr
><tr id="gr_svn379_754"

><td id="754"><a href="#754">754</a></td></tr
><tr id="gr_svn379_755"

><td id="755"><a href="#755">755</a></td></tr
><tr id="gr_svn379_756"

><td id="756"><a href="#756">756</a></td></tr
><tr id="gr_svn379_757"

><td id="757"><a href="#757">757</a></td></tr
><tr id="gr_svn379_758"

><td id="758"><a href="#758">758</a></td></tr
><tr id="gr_svn379_759"

><td id="759"><a href="#759">759</a></td></tr
><tr id="gr_svn379_760"

><td id="760"><a href="#760">760</a></td></tr
><tr id="gr_svn379_761"

><td id="761"><a href="#761">761</a></td></tr
><tr id="gr_svn379_762"

><td id="762"><a href="#762">762</a></td></tr
><tr id="gr_svn379_763"

><td id="763"><a href="#763">763</a></td></tr
><tr id="gr_svn379_764"

><td id="764"><a href="#764">764</a></td></tr
><tr id="gr_svn379_765"

><td id="765"><a href="#765">765</a></td></tr
><tr id="gr_svn379_766"

><td id="766"><a href="#766">766</a></td></tr
><tr id="gr_svn379_767"

><td id="767"><a href="#767">767</a></td></tr
><tr id="gr_svn379_768"

><td id="768"><a href="#768">768</a></td></tr
><tr id="gr_svn379_769"

><td id="769"><a href="#769">769</a></td></tr
><tr id="gr_svn379_770"

><td id="770"><a href="#770">770</a></td></tr
><tr id="gr_svn379_771"

><td id="771"><a href="#771">771</a></td></tr
><tr id="gr_svn379_772"

><td id="772"><a href="#772">772</a></td></tr
><tr id="gr_svn379_773"

><td id="773"><a href="#773">773</a></td></tr
><tr id="gr_svn379_774"

><td id="774"><a href="#774">774</a></td></tr
><tr id="gr_svn379_775"

><td id="775"><a href="#775">775</a></td></tr
><tr id="gr_svn379_776"

><td id="776"><a href="#776">776</a></td></tr
><tr id="gr_svn379_777"

><td id="777"><a href="#777">777</a></td></tr
><tr id="gr_svn379_778"

><td id="778"><a href="#778">778</a></td></tr
><tr id="gr_svn379_779"

><td id="779"><a href="#779">779</a></td></tr
><tr id="gr_svn379_780"

><td id="780"><a href="#780">780</a></td></tr
><tr id="gr_svn379_781"

><td id="781"><a href="#781">781</a></td></tr
><tr id="gr_svn379_782"

><td id="782"><a href="#782">782</a></td></tr
><tr id="gr_svn379_783"

><td id="783"><a href="#783">783</a></td></tr
><tr id="gr_svn379_784"

><td id="784"><a href="#784">784</a></td></tr
><tr id="gr_svn379_785"

><td id="785"><a href="#785">785</a></td></tr
><tr id="gr_svn379_786"

><td id="786"><a href="#786">786</a></td></tr
><tr id="gr_svn379_787"

><td id="787"><a href="#787">787</a></td></tr
><tr id="gr_svn379_788"

><td id="788"><a href="#788">788</a></td></tr
><tr id="gr_svn379_789"

><td id="789"><a href="#789">789</a></td></tr
><tr id="gr_svn379_790"

><td id="790"><a href="#790">790</a></td></tr
><tr id="gr_svn379_791"

><td id="791"><a href="#791">791</a></td></tr
><tr id="gr_svn379_792"

><td id="792"><a href="#792">792</a></td></tr
><tr id="gr_svn379_793"

><td id="793"><a href="#793">793</a></td></tr
><tr id="gr_svn379_794"

><td id="794"><a href="#794">794</a></td></tr
><tr id="gr_svn379_795"

><td id="795"><a href="#795">795</a></td></tr
><tr id="gr_svn379_796"

><td id="796"><a href="#796">796</a></td></tr
><tr id="gr_svn379_797"

><td id="797"><a href="#797">797</a></td></tr
><tr id="gr_svn379_798"

><td id="798"><a href="#798">798</a></td></tr
><tr id="gr_svn379_799"

><td id="799"><a href="#799">799</a></td></tr
><tr id="gr_svn379_800"

><td id="800"><a href="#800">800</a></td></tr
><tr id="gr_svn379_801"

><td id="801"><a href="#801">801</a></td></tr
><tr id="gr_svn379_802"

><td id="802"><a href="#802">802</a></td></tr
><tr id="gr_svn379_803"

><td id="803"><a href="#803">803</a></td></tr
><tr id="gr_svn379_804"

><td id="804"><a href="#804">804</a></td></tr
><tr id="gr_svn379_805"

><td id="805"><a href="#805">805</a></td></tr
><tr id="gr_svn379_806"

><td id="806"><a href="#806">806</a></td></tr
><tr id="gr_svn379_807"

><td id="807"><a href="#807">807</a></td></tr
><tr id="gr_svn379_808"

><td id="808"><a href="#808">808</a></td></tr
><tr id="gr_svn379_809"

><td id="809"><a href="#809">809</a></td></tr
><tr id="gr_svn379_810"

><td id="810"><a href="#810">810</a></td></tr
><tr id="gr_svn379_811"

><td id="811"><a href="#811">811</a></td></tr
><tr id="gr_svn379_812"

><td id="812"><a href="#812">812</a></td></tr
><tr id="gr_svn379_813"

><td id="813"><a href="#813">813</a></td></tr
><tr id="gr_svn379_814"

><td id="814"><a href="#814">814</a></td></tr
><tr id="gr_svn379_815"

><td id="815"><a href="#815">815</a></td></tr
><tr id="gr_svn379_816"

><td id="816"><a href="#816">816</a></td></tr
><tr id="gr_svn379_817"

><td id="817"><a href="#817">817</a></td></tr
><tr id="gr_svn379_818"

><td id="818"><a href="#818">818</a></td></tr
><tr id="gr_svn379_819"

><td id="819"><a href="#819">819</a></td></tr
><tr id="gr_svn379_820"

><td id="820"><a href="#820">820</a></td></tr
><tr id="gr_svn379_821"

><td id="821"><a href="#821">821</a></td></tr
><tr id="gr_svn379_822"

><td id="822"><a href="#822">822</a></td></tr
><tr id="gr_svn379_823"

><td id="823"><a href="#823">823</a></td></tr
><tr id="gr_svn379_824"

><td id="824"><a href="#824">824</a></td></tr
><tr id="gr_svn379_825"

><td id="825"><a href="#825">825</a></td></tr
><tr id="gr_svn379_826"

><td id="826"><a href="#826">826</a></td></tr
><tr id="gr_svn379_827"

><td id="827"><a href="#827">827</a></td></tr
><tr id="gr_svn379_828"

><td id="828"><a href="#828">828</a></td></tr
><tr id="gr_svn379_829"

><td id="829"><a href="#829">829</a></td></tr
><tr id="gr_svn379_830"

><td id="830"><a href="#830">830</a></td></tr
><tr id="gr_svn379_831"

><td id="831"><a href="#831">831</a></td></tr
><tr id="gr_svn379_832"

><td id="832"><a href="#832">832</a></td></tr
><tr id="gr_svn379_833"

><td id="833"><a href="#833">833</a></td></tr
><tr id="gr_svn379_834"

><td id="834"><a href="#834">834</a></td></tr
><tr id="gr_svn379_835"

><td id="835"><a href="#835">835</a></td></tr
><tr id="gr_svn379_836"

><td id="836"><a href="#836">836</a></td></tr
><tr id="gr_svn379_837"

><td id="837"><a href="#837">837</a></td></tr
><tr id="gr_svn379_838"

><td id="838"><a href="#838">838</a></td></tr
><tr id="gr_svn379_839"

><td id="839"><a href="#839">839</a></td></tr
><tr id="gr_svn379_840"

><td id="840"><a href="#840">840</a></td></tr
><tr id="gr_svn379_841"

><td id="841"><a href="#841">841</a></td></tr
><tr id="gr_svn379_842"

><td id="842"><a href="#842">842</a></td></tr
><tr id="gr_svn379_843"

><td id="843"><a href="#843">843</a></td></tr
><tr id="gr_svn379_844"

><td id="844"><a href="#844">844</a></td></tr
><tr id="gr_svn379_845"

><td id="845"><a href="#845">845</a></td></tr
><tr id="gr_svn379_846"

><td id="846"><a href="#846">846</a></td></tr
><tr id="gr_svn379_847"

><td id="847"><a href="#847">847</a></td></tr
><tr id="gr_svn379_848"

><td id="848"><a href="#848">848</a></td></tr
><tr id="gr_svn379_849"

><td id="849"><a href="#849">849</a></td></tr
><tr id="gr_svn379_850"

><td id="850"><a href="#850">850</a></td></tr
><tr id="gr_svn379_851"

><td id="851"><a href="#851">851</a></td></tr
><tr id="gr_svn379_852"

><td id="852"><a href="#852">852</a></td></tr
><tr id="gr_svn379_853"

><td id="853"><a href="#853">853</a></td></tr
><tr id="gr_svn379_854"

><td id="854"><a href="#854">854</a></td></tr
><tr id="gr_svn379_855"

><td id="855"><a href="#855">855</a></td></tr
><tr id="gr_svn379_856"

><td id="856"><a href="#856">856</a></td></tr
><tr id="gr_svn379_857"

><td id="857"><a href="#857">857</a></td></tr
><tr id="gr_svn379_858"

><td id="858"><a href="#858">858</a></td></tr
><tr id="gr_svn379_859"

><td id="859"><a href="#859">859</a></td></tr
><tr id="gr_svn379_860"

><td id="860"><a href="#860">860</a></td></tr
><tr id="gr_svn379_861"

><td id="861"><a href="#861">861</a></td></tr
><tr id="gr_svn379_862"

><td id="862"><a href="#862">862</a></td></tr
></table></pre>

<pre><table width="100%" id="nums_table_4"><tr id="gr_svn379_863"

><td id="863"><a href="#863">863</a></td></tr
><tr id="gr_svn379_864"

><td id="864"><a href="#864">864</a></td></tr
><tr id="gr_svn379_865"

><td id="865"><a href="#865">865</a></td></tr
><tr id="gr_svn379_866"

><td id="866"><a href="#866">866</a></td></tr
><tr id="gr_svn379_867"

><td id="867"><a href="#867">867</a></td></tr
><tr id="gr_svn379_868"

><td id="868"><a href="#868">868</a></td></tr
><tr id="gr_svn379_869"

><td id="869"><a href="#869">869</a></td></tr
><tr id="gr_svn379_870"

><td id="870"><a href="#870">870</a></td></tr
><tr id="gr_svn379_871"

><td id="871"><a href="#871">871</a></td></tr
><tr id="gr_svn379_872"

><td id="872"><a href="#872">872</a></td></tr
><tr id="gr_svn379_873"

><td id="873"><a href="#873">873</a></td></tr
><tr id="gr_svn379_874"

><td id="874"><a href="#874">874</a></td></tr
><tr id="gr_svn379_875"

><td id="875"><a href="#875">875</a></td></tr
><tr id="gr_svn379_876"

><td id="876"><a href="#876">876</a></td></tr
><tr id="gr_svn379_877"

><td id="877"><a href="#877">877</a></td></tr
><tr id="gr_svn379_878"

><td id="878"><a href="#878">878</a></td></tr
><tr id="gr_svn379_879"

><td id="879"><a href="#879">879</a></td></tr
><tr id="gr_svn379_880"

><td id="880"><a href="#880">880</a></td></tr
><tr id="gr_svn379_881"

><td id="881"><a href="#881">881</a></td></tr
><tr id="gr_svn379_882"

><td id="882"><a href="#882">882</a></td></tr
><tr id="gr_svn379_883"

><td id="883"><a href="#883">883</a></td></tr
><tr id="gr_svn379_884"

><td id="884"><a href="#884">884</a></td></tr
><tr id="gr_svn379_885"

><td id="885"><a href="#885">885</a></td></tr
><tr id="gr_svn379_886"

><td id="886"><a href="#886">886</a></td></tr
><tr id="gr_svn379_887"

><td id="887"><a href="#887">887</a></td></tr
><tr id="gr_svn379_888"

><td id="888"><a href="#888">888</a></td></tr
><tr id="gr_svn379_889"

><td id="889"><a href="#889">889</a></td></tr
><tr id="gr_svn379_890"

><td id="890"><a href="#890">890</a></td></tr
><tr id="gr_svn379_891"

><td id="891"><a href="#891">891</a></td></tr
><tr id="gr_svn379_892"

><td id="892"><a href="#892">892</a></td></tr
><tr id="gr_svn379_893"

><td id="893"><a href="#893">893</a></td></tr
><tr id="gr_svn379_894"

><td id="894"><a href="#894">894</a></td></tr
><tr id="gr_svn379_895"

><td id="895"><a href="#895">895</a></td></tr
><tr id="gr_svn379_896"

><td id="896"><a href="#896">896</a></td></tr
><tr id="gr_svn379_897"

><td id="897"><a href="#897">897</a></td></tr
><tr id="gr_svn379_898"

><td id="898"><a href="#898">898</a></td></tr
><tr id="gr_svn379_899"

><td id="899"><a href="#899">899</a></td></tr
><tr id="gr_svn379_900"

><td id="900"><a href="#900">900</a></td></tr
><tr id="gr_svn379_901"

><td id="901"><a href="#901">901</a></td></tr
><tr id="gr_svn379_902"

><td id="902"><a href="#902">902</a></td></tr
><tr id="gr_svn379_903"

><td id="903"><a href="#903">903</a></td></tr
><tr id="gr_svn379_904"

><td id="904"><a href="#904">904</a></td></tr
><tr id="gr_svn379_905"

><td id="905"><a href="#905">905</a></td></tr
><tr id="gr_svn379_906"

><td id="906"><a href="#906">906</a></td></tr
><tr id="gr_svn379_907"

><td id="907"><a href="#907">907</a></td></tr
><tr id="gr_svn379_908"

><td id="908"><a href="#908">908</a></td></tr
><tr id="gr_svn379_909"

><td id="909"><a href="#909">909</a></td></tr
><tr id="gr_svn379_910"

><td id="910"><a href="#910">910</a></td></tr
><tr id="gr_svn379_911"

><td id="911"><a href="#911">911</a></td></tr
><tr id="gr_svn379_912"

><td id="912"><a href="#912">912</a></td></tr
><tr id="gr_svn379_913"

><td id="913"><a href="#913">913</a></td></tr
><tr id="gr_svn379_914"

><td id="914"><a href="#914">914</a></td></tr
><tr id="gr_svn379_915"

><td id="915"><a href="#915">915</a></td></tr
><tr id="gr_svn379_916"

><td id="916"><a href="#916">916</a></td></tr
><tr id="gr_svn379_917"

><td id="917"><a href="#917">917</a></td></tr
><tr id="gr_svn379_918"

><td id="918"><a href="#918">918</a></td></tr
><tr id="gr_svn379_919"

><td id="919"><a href="#919">919</a></td></tr
><tr id="gr_svn379_920"

><td id="920"><a href="#920">920</a></td></tr
><tr id="gr_svn379_921"

><td id="921"><a href="#921">921</a></td></tr
><tr id="gr_svn379_922"

><td id="922"><a href="#922">922</a></td></tr
><tr id="gr_svn379_923"

><td id="923"><a href="#923">923</a></td></tr
><tr id="gr_svn379_924"

><td id="924"><a href="#924">924</a></td></tr
><tr id="gr_svn379_925"

><td id="925"><a href="#925">925</a></td></tr
><tr id="gr_svn379_926"

><td id="926"><a href="#926">926</a></td></tr
><tr id="gr_svn379_927"

><td id="927"><a href="#927">927</a></td></tr
><tr id="gr_svn379_928"

><td id="928"><a href="#928">928</a></td></tr
><tr id="gr_svn379_929"

><td id="929"><a href="#929">929</a></td></tr
><tr id="gr_svn379_930"

><td id="930"><a href="#930">930</a></td></tr
><tr id="gr_svn379_931"

><td id="931"><a href="#931">931</a></td></tr
><tr id="gr_svn379_932"

><td id="932"><a href="#932">932</a></td></tr
><tr id="gr_svn379_933"

><td id="933"><a href="#933">933</a></td></tr
><tr id="gr_svn379_934"

><td id="934"><a href="#934">934</a></td></tr
><tr id="gr_svn379_935"

><td id="935"><a href="#935">935</a></td></tr
><tr id="gr_svn379_936"

><td id="936"><a href="#936">936</a></td></tr
><tr id="gr_svn379_937"

><td id="937"><a href="#937">937</a></td></tr
><tr id="gr_svn379_938"

><td id="938"><a href="#938">938</a></td></tr
><tr id="gr_svn379_939"

><td id="939"><a href="#939">939</a></td></tr
><tr id="gr_svn379_940"

><td id="940"><a href="#940">940</a></td></tr
><tr id="gr_svn379_941"

><td id="941"><a href="#941">941</a></td></tr
><tr id="gr_svn379_942"

><td id="942"><a href="#942">942</a></td></tr
><tr id="gr_svn379_943"

><td id="943"><a href="#943">943</a></td></tr
><tr id="gr_svn379_944"

><td id="944"><a href="#944">944</a></td></tr
><tr id="gr_svn379_945"

><td id="945"><a href="#945">945</a></td></tr
><tr id="gr_svn379_946"

><td id="946"><a href="#946">946</a></td></tr
><tr id="gr_svn379_947"

><td id="947"><a href="#947">947</a></td></tr
><tr id="gr_svn379_948"

><td id="948"><a href="#948">948</a></td></tr
><tr id="gr_svn379_949"

><td id="949"><a href="#949">949</a></td></tr
><tr id="gr_svn379_950"

><td id="950"><a href="#950">950</a></td></tr
><tr id="gr_svn379_951"

><td id="951"><a href="#951">951</a></td></tr
><tr id="gr_svn379_952"

><td id="952"><a href="#952">952</a></td></tr
><tr id="gr_svn379_953"

><td id="953"><a href="#953">953</a></td></tr
><tr id="gr_svn379_954"

><td id="954"><a href="#954">954</a></td></tr
><tr id="gr_svn379_955"

><td id="955"><a href="#955">955</a></td></tr
><tr id="gr_svn379_956"

><td id="956"><a href="#956">956</a></td></tr
><tr id="gr_svn379_957"

><td id="957"><a href="#957">957</a></td></tr
><tr id="gr_svn379_958"

><td id="958"><a href="#958">958</a></td></tr
><tr id="gr_svn379_959"

><td id="959"><a href="#959">959</a></td></tr
><tr id="gr_svn379_960"

><td id="960"><a href="#960">960</a></td></tr
><tr id="gr_svn379_961"

><td id="961"><a href="#961">961</a></td></tr
><tr id="gr_svn379_962"

><td id="962"><a href="#962">962</a></td></tr
><tr id="gr_svn379_963"

><td id="963"><a href="#963">963</a></td></tr
><tr id="gr_svn379_964"

><td id="964"><a href="#964">964</a></td></tr
><tr id="gr_svn379_965"

><td id="965"><a href="#965">965</a></td></tr
><tr id="gr_svn379_966"

><td id="966"><a href="#966">966</a></td></tr
><tr id="gr_svn379_967"

><td id="967"><a href="#967">967</a></td></tr
><tr id="gr_svn379_968"

><td id="968"><a href="#968">968</a></td></tr
><tr id="gr_svn379_969"

><td id="969"><a href="#969">969</a></td></tr
><tr id="gr_svn379_970"

><td id="970"><a href="#970">970</a></td></tr
><tr id="gr_svn379_971"

><td id="971"><a href="#971">971</a></td></tr
><tr id="gr_svn379_972"

><td id="972"><a href="#972">972</a></td></tr
><tr id="gr_svn379_973"

><td id="973"><a href="#973">973</a></td></tr
><tr id="gr_svn379_974"

><td id="974"><a href="#974">974</a></td></tr
><tr id="gr_svn379_975"

><td id="975"><a href="#975">975</a></td></tr
><tr id="gr_svn379_976"

><td id="976"><a href="#976">976</a></td></tr
><tr id="gr_svn379_977"

><td id="977"><a href="#977">977</a></td></tr
><tr id="gr_svn379_978"

><td id="978"><a href="#978">978</a></td></tr
><tr id="gr_svn379_979"

><td id="979"><a href="#979">979</a></td></tr
><tr id="gr_svn379_980"

><td id="980"><a href="#980">980</a></td></tr
><tr id="gr_svn379_981"

><td id="981"><a href="#981">981</a></td></tr
><tr id="gr_svn379_982"

><td id="982"><a href="#982">982</a></td></tr
><tr id="gr_svn379_983"

><td id="983"><a href="#983">983</a></td></tr
><tr id="gr_svn379_984"

><td id="984"><a href="#984">984</a></td></tr
><tr id="gr_svn379_985"

><td id="985"><a href="#985">985</a></td></tr
><tr id="gr_svn379_986"

><td id="986"><a href="#986">986</a></td></tr
><tr id="gr_svn379_987"

><td id="987"><a href="#987">987</a></td></tr
><tr id="gr_svn379_988"

><td id="988"><a href="#988">988</a></td></tr
><tr id="gr_svn379_989"

><td id="989"><a href="#989">989</a></td></tr
><tr id="gr_svn379_990"

><td id="990"><a href="#990">990</a></td></tr
><tr id="gr_svn379_991"

><td id="991"><a href="#991">991</a></td></tr
><tr id="gr_svn379_992"

><td id="992"><a href="#992">992</a></td></tr
><tr id="gr_svn379_993"

><td id="993"><a href="#993">993</a></td></tr
><tr id="gr_svn379_994"

><td id="994"><a href="#994">994</a></td></tr
><tr id="gr_svn379_995"

><td id="995"><a href="#995">995</a></td></tr
><tr id="gr_svn379_996"

><td id="996"><a href="#996">996</a></td></tr
><tr id="gr_svn379_997"

><td id="997"><a href="#997">997</a></td></tr
><tr id="gr_svn379_998"

><td id="998"><a href="#998">998</a></td></tr
><tr id="gr_svn379_999"

><td id="999"><a href="#999">999</a></td></tr
><tr id="gr_svn379_1000"

><td id="1000"><a href="#1000">1000</a></td></tr
><tr id="gr_svn379_1001"

><td id="1001"><a href="#1001">1001</a></td></tr
><tr id="gr_svn379_1002"

><td id="1002"><a href="#1002">1002</a></td></tr
><tr id="gr_svn379_1003"

><td id="1003"><a href="#1003">1003</a></td></tr
><tr id="gr_svn379_1004"

><td id="1004"><a href="#1004">1004</a></td></tr
><tr id="gr_svn379_1005"

><td id="1005"><a href="#1005">1005</a></td></tr
><tr id="gr_svn379_1006"

><td id="1006"><a href="#1006">1006</a></td></tr
><tr id="gr_svn379_1007"

><td id="1007"><a href="#1007">1007</a></td></tr
><tr id="gr_svn379_1008"

><td id="1008"><a href="#1008">1008</a></td></tr
><tr id="gr_svn379_1009"

><td id="1009"><a href="#1009">1009</a></td></tr
><tr id="gr_svn379_1010"

><td id="1010"><a href="#1010">1010</a></td></tr
><tr id="gr_svn379_1011"

><td id="1011"><a href="#1011">1011</a></td></tr
><tr id="gr_svn379_1012"

><td id="1012"><a href="#1012">1012</a></td></tr
><tr id="gr_svn379_1013"

><td id="1013"><a href="#1013">1013</a></td></tr
><tr id="gr_svn379_1014"

><td id="1014"><a href="#1014">1014</a></td></tr
><tr id="gr_svn379_1015"

><td id="1015"><a href="#1015">1015</a></td></tr
><tr id="gr_svn379_1016"

><td id="1016"><a href="#1016">1016</a></td></tr
><tr id="gr_svn379_1017"

><td id="1017"><a href="#1017">1017</a></td></tr
><tr id="gr_svn379_1018"

><td id="1018"><a href="#1018">1018</a></td></tr
><tr id="gr_svn379_1019"

><td id="1019"><a href="#1019">1019</a></td></tr
><tr id="gr_svn379_1020"

><td id="1020"><a href="#1020">1020</a></td></tr
><tr id="gr_svn379_1021"

><td id="1021"><a href="#1021">1021</a></td></tr
><tr id="gr_svn379_1022"

><td id="1022"><a href="#1022">1022</a></td></tr
><tr id="gr_svn379_1023"

><td id="1023"><a href="#1023">1023</a></td></tr
><tr id="gr_svn379_1024"

><td id="1024"><a href="#1024">1024</a></td></tr
><tr id="gr_svn379_1025"

><td id="1025"><a href="#1025">1025</a></td></tr
><tr id="gr_svn379_1026"

><td id="1026"><a href="#1026">1026</a></td></tr
><tr id="gr_svn379_1027"

><td id="1027"><a href="#1027">1027</a></td></tr
><tr id="gr_svn379_1028"

><td id="1028"><a href="#1028">1028</a></td></tr
><tr id="gr_svn379_1029"

><td id="1029"><a href="#1029">1029</a></td></tr
><tr id="gr_svn379_1030"

><td id="1030"><a href="#1030">1030</a></td></tr
><tr id="gr_svn379_1031"

><td id="1031"><a href="#1031">1031</a></td></tr
><tr id="gr_svn379_1032"

><td id="1032"><a href="#1032">1032</a></td></tr
><tr id="gr_svn379_1033"

><td id="1033"><a href="#1033">1033</a></td></tr
><tr id="gr_svn379_1034"

><td id="1034"><a href="#1034">1034</a></td></tr
></table></pre>

<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre class="prettyprint"><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>

<pre class="prettyprint "><table id="src_table_0"><tr
id=sl_svn379_1

><td class="source">//<br></td></tr
><tr
id=sl_svn379_2

><td class="source">//  GTMSenTestCase.h<br></td></tr
><tr
id=sl_svn379_3

><td class="source">//<br></td></tr
><tr
id=sl_svn379_4

><td class="source">//  Copyright 2007-2008 Google Inc.<br></td></tr
><tr
id=sl_svn379_5

><td class="source">//<br></td></tr
><tr
id=sl_svn379_6

><td class="source">//  Licensed under the Apache License, Version 2.0 (the &quot;License&quot;); you may not<br></td></tr
><tr
id=sl_svn379_7

><td class="source">//  use this file except in compliance with the License.  You may obtain a copy<br></td></tr
><tr
id=sl_svn379_8

><td class="source">//  of the License at<br></td></tr
><tr
id=sl_svn379_9

><td class="source">// <br></td></tr
><tr
id=sl_svn379_10

><td class="source">//  http://www.apache.org/licenses/LICENSE-2.0<br></td></tr
><tr
id=sl_svn379_11

><td class="source">// <br></td></tr
><tr
id=sl_svn379_12

><td class="source">//  Unless required by applicable law or agreed to in writing, software<br></td></tr
><tr
id=sl_svn379_13

><td class="source">//  distributed under the License is distributed on an &quot;AS IS&quot; BASIS, WITHOUT<br></td></tr
><tr
id=sl_svn379_14

><td class="source">//  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the<br></td></tr
><tr
id=sl_svn379_15

><td class="source">//  License for the specific language governing permissions and limitations under<br></td></tr
><tr
id=sl_svn379_16

><td class="source">//  the License.<br></td></tr
><tr
id=sl_svn379_17

><td class="source">//<br></td></tr
><tr
id=sl_svn379_18

><td class="source"><br></td></tr
><tr
id=sl_svn379_19

><td class="source">// Portions of this file fall under the following license, marked with<br></td></tr
><tr
id=sl_svn379_20

><td class="source">// SENTE_BEGIN - SENTE_END<br></td></tr
><tr
id=sl_svn379_21

><td class="source">//<br></td></tr
><tr
id=sl_svn379_22

><td class="source">// Copyright (c) 1997-2005, Sen:te (Sente SA).  All rights reserved.<br></td></tr
><tr
id=sl_svn379_23

><td class="source">//<br></td></tr
><tr
id=sl_svn379_24

><td class="source">// Use of this source code is governed by the following license:<br></td></tr
><tr
id=sl_svn379_25

><td class="source">// <br></td></tr
><tr
id=sl_svn379_26

><td class="source">// Redistribution and use in source and binary forms, with or without modification, <br></td></tr
><tr
id=sl_svn379_27

><td class="source">// are permitted provided that the following conditions are met:<br></td></tr
><tr
id=sl_svn379_28

><td class="source">// <br></td></tr
><tr
id=sl_svn379_29

><td class="source">// (1) Redistributions of source code must retain the above copyright notice, <br></td></tr
><tr
id=sl_svn379_30

><td class="source">// this list of conditions and the following disclaimer.<br></td></tr
><tr
id=sl_svn379_31

><td class="source">// <br></td></tr
><tr
id=sl_svn379_32

><td class="source">// (2) Redistributions in binary form must reproduce the above copyright notice, <br></td></tr
><tr
id=sl_svn379_33

><td class="source">// this list of conditions and the following disclaimer in the documentation <br></td></tr
><tr
id=sl_svn379_34

><td class="source">// and/or other materials provided with the distribution.<br></td></tr
><tr
id=sl_svn379_35

><td class="source">// <br></td></tr
><tr
id=sl_svn379_36

><td class="source">// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS&#39;&#39; <br></td></tr
><tr
id=sl_svn379_37

><td class="source">// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED <br></td></tr
><tr
id=sl_svn379_38

><td class="source">// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. <br></td></tr
><tr
id=sl_svn379_39

><td class="source">// IN NO EVENT SHALL Sente SA OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, <br></td></tr
><tr
id=sl_svn379_40

><td class="source">// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT <br></td></tr
><tr
id=sl_svn379_41

><td class="source">// OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) <br></td></tr
><tr
id=sl_svn379_42

><td class="source">// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, <br></td></tr
><tr
id=sl_svn379_43

><td class="source">// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, <br></td></tr
><tr
id=sl_svn379_44

><td class="source">// EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.<br></td></tr
><tr
id=sl_svn379_45

><td class="source">// <br></td></tr
><tr
id=sl_svn379_46

><td class="source">// Note: this license is equivalent to the FreeBSD license.<br></td></tr
><tr
id=sl_svn379_47

><td class="source">// <br></td></tr
><tr
id=sl_svn379_48

><td class="source">// This notice may not be removed from this file.<br></td></tr
><tr
id=sl_svn379_49

><td class="source"><br></td></tr
><tr
id=sl_svn379_50

><td class="source">// Some extra test case macros that would have been convenient for SenTestingKit <br></td></tr
><tr
id=sl_svn379_51

><td class="source">// to provide. I didn&#39;t stick GTM in front of the Macro names, so that they would <br></td></tr
><tr
id=sl_svn379_52

><td class="source">// be easy to remember.<br></td></tr
><tr
id=sl_svn379_53

><td class="source"><br></td></tr
><tr
id=sl_svn379_54

><td class="source">#import &quot;GTMDefines.h&quot;<br></td></tr
><tr
id=sl_svn379_55

><td class="source"><br></td></tr
><tr
id=sl_svn379_56

><td class="source">#if (!GTM_IPHONE_SDK) <br></td></tr
><tr
id=sl_svn379_57

><td class="source">#import &lt;SenTestingKit/SenTestingKit.h&gt;<br></td></tr
><tr
id=sl_svn379_58

><td class="source">#else<br></td></tr
><tr
id=sl_svn379_59

><td class="source">#import &lt;Foundation/Foundation.h&gt;<br></td></tr
><tr
id=sl_svn379_60

><td class="source">#ifdef __cplusplus<br></td></tr
><tr
id=sl_svn379_61

><td class="source">extern &quot;C&quot; {<br></td></tr
><tr
id=sl_svn379_62

><td class="source">#endif<br></td></tr
><tr
id=sl_svn379_63

><td class="source">NSString *STComposeString(NSString *, ...);<br></td></tr
><tr
id=sl_svn379_64

><td class="source">#ifdef __cplusplus<br></td></tr
><tr
id=sl_svn379_65

><td class="source">}<br></td></tr
><tr
id=sl_svn379_66

><td class="source">#endif<br></td></tr
><tr
id=sl_svn379_67

><td class="source"><br></td></tr
><tr
id=sl_svn379_68

><td class="source">#endif  // !GTM_IPHONE_SDK<br></td></tr
><tr
id=sl_svn379_69

><td class="source"><br></td></tr
><tr
id=sl_svn379_70

><td class="source">// Generates a failure when a1 != noErr<br></td></tr
><tr
id=sl_svn379_71

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_72

><td class="source">//    a1: should be either an OSErr or an OSStatus<br></td></tr
><tr
id=sl_svn379_73

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_74

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_75

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_76

><td class="source">#define STAssertNoErr(a1, description, ...) \<br></td></tr
><tr
id=sl_svn379_77

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_78

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_79

><td class="source">    OSStatus a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_80

><td class="source">    if (a1value != noErr) { \<br></td></tr
><tr
id=sl_svn379_81

><td class="source">      NSString *_expression = [NSString stringWithFormat:@&quot;Expected noErr, got %ld for (%s)&quot;, a1value, #a1]; \<br></td></tr
><tr
id=sl_svn379_82

><td class="source">      [self failWithException:([NSException failureInCondition:_expression \<br></td></tr
><tr
id=sl_svn379_83

><td class="source">                       isTrue:NO \<br></td></tr
><tr
id=sl_svn379_84

><td class="source">                       inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_85

><td class="source">                       atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_86

><td class="source">              withDescription:@&quot;%@&quot;, STComposeString(description, ##__VA_ARGS__)])]; \<br></td></tr
><tr
id=sl_svn379_87

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_88

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_89

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_90

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat:@&quot;(%s) == noErr fails&quot;, #a1] \<br></td></tr
><tr
id=sl_svn379_91

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_92

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_93

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_94

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_95

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_96

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_97

><td class="source"><br></td></tr
><tr
id=sl_svn379_98

><td class="source">// Generates a failure when a1 != a2<br></td></tr
><tr
id=sl_svn379_99

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_100

><td class="source">//    a1: received value. Should be either an OSErr or an OSStatus<br></td></tr
><tr
id=sl_svn379_101

><td class="source">//    a2: expected value. Should be either an OSErr or an OSStatus<br></td></tr
><tr
id=sl_svn379_102

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_103

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_104

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_105

><td class="source">#define STAssertErr(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_106

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_107

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_108

><td class="source">    OSStatus a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_109

><td class="source">    OSStatus a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_110

><td class="source">    if (a1value != a2value) { \<br></td></tr
><tr
id=sl_svn379_111

><td class="source">      NSString *_expression = [NSString stringWithFormat:@&quot;Expected %s(%ld) but got %ld for (%s)&quot;, #a2, a2value, a1value, #a1]; \<br></td></tr
><tr
id=sl_svn379_112

><td class="source">      [self failWithException:([NSException failureInCondition:_expression \<br></td></tr
><tr
id=sl_svn379_113

><td class="source">                       isTrue:NO \<br></td></tr
><tr
id=sl_svn379_114

><td class="source">                       inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_115

><td class="source">                       atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_116

><td class="source">              withDescription:@&quot;%@&quot;, STComposeString(description, ##__VA_ARGS__)])]; \<br></td></tr
><tr
id=sl_svn379_117

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_118

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_119

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_120

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat:@&quot;(%s) == (%s) fails&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_121

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_122

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_123

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_124

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_125

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_126

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_127

><td class="source"><br></td></tr
><tr
id=sl_svn379_128

><td class="source"><br></td></tr
><tr
id=sl_svn379_129

><td class="source">// Generates a failure when a1 is NULL<br></td></tr
><tr
id=sl_svn379_130

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_131

><td class="source">//    a1: should be a pointer (use STAssertNotNil for an object)<br></td></tr
><tr
id=sl_svn379_132

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_133

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_134

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_135

><td class="source">#define STAssertNotNULL(a1, description, ...) \<br></td></tr
><tr
id=sl_svn379_136

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_137

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_138

><td class="source">    const void* a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_139

><td class="source">    if (a1value == NULL) { \<br></td></tr
><tr
id=sl_svn379_140

><td class="source">      NSString *_expression = [NSString stringWithFormat:@&quot;((%s) != NULL)&quot;, #a1]; \<br></td></tr
><tr
id=sl_svn379_141

><td class="source">      [self failWithException:([NSException failureInCondition:_expression \<br></td></tr
><tr
id=sl_svn379_142

><td class="source">                       isTrue:NO \<br></td></tr
><tr
id=sl_svn379_143

><td class="source">                       inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_144

><td class="source">                       atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_145

><td class="source">              withDescription:@&quot;%@&quot;, STComposeString(description, ##__VA_ARGS__)])]; \<br></td></tr
><tr
id=sl_svn379_146

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_147

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_148

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_149

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat:@&quot;(%s) != NULL fails&quot;, #a1] \<br></td></tr
><tr
id=sl_svn379_150

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_151

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_152

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_153

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_154

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_155

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_156

><td class="source"><br></td></tr
><tr
id=sl_svn379_157

><td class="source">// Generates a failure when a1 is not NULL<br></td></tr
><tr
id=sl_svn379_158

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_159

><td class="source">//    a1: should be a pointer (use STAssertNil for an object)<br></td></tr
><tr
id=sl_svn379_160

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_161

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_162

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_163

><td class="source">#define STAssertNULL(a1, description, ...) \<br></td></tr
><tr
id=sl_svn379_164

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_165

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_166

><td class="source">    const void* a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_167

><td class="source">    if (a1value != NULL) { \<br></td></tr
><tr
id=sl_svn379_168

><td class="source">      NSString *_expression = [NSString stringWithFormat:@&quot;((%s) == NULL)&quot;, #a1]; \<br></td></tr
><tr
id=sl_svn379_169

><td class="source">      [self failWithException:([NSException failureInCondition:_expression \<br></td></tr
><tr
id=sl_svn379_170

><td class="source">                                                        isTrue:NO \<br></td></tr
><tr
id=sl_svn379_171

><td class="source">                                                        inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_172

><td class="source">                                                        atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_173

><td class="source">                                               withDescription:@&quot;%@&quot;, STComposeString(description, ##__VA_ARGS__)])]; \<br></td></tr
><tr
id=sl_svn379_174

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_175

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_176

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_177

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat:@&quot;(%s) == NULL fails&quot;, #a1] \<br></td></tr
><tr
id=sl_svn379_178

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_179

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_180

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_181

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_182

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_183

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_184

><td class="source"><br></td></tr
><tr
id=sl_svn379_185

><td class="source">// Generates a failure when a1 is equal to a2. This test is for C scalars, <br></td></tr
><tr
id=sl_svn379_186

><td class="source">// structs and unions.<br></td></tr
><tr
id=sl_svn379_187

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_188

><td class="source">//    a1: argument 1<br></td></tr
><tr
id=sl_svn379_189

><td class="source">//    a2: argument 2<br></td></tr
><tr
id=sl_svn379_190

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_191

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_192

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_193

><td class="source">#define STAssertNotEquals(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_194

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_195

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_196

><td class="source">    if (strcmp(@encode(__typeof__(a1)), @encode(__typeof__(a2)))) { \<br></td></tr
><tr
id=sl_svn379_197

><td class="source">      [self failWithException:[NSException failureInFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_198

><td class="source">                                                  atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_199

><td class="source">                                         withDescription:[@&quot;Type mismatch -- &quot; stringByAppendingString:STComposeString(description, ##__VA_ARGS__)]]]; \<br></td></tr
><tr
id=sl_svn379_200

><td class="source">    } else { \<br></td></tr
><tr
id=sl_svn379_201

><td class="source">      __typeof__(a1) a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_202

><td class="source">      __typeof__(a2) a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_203

><td class="source">      NSValue *a1encoded = [NSValue value:&amp;a1value withObjCType:@encode(__typeof__(a1))]; \<br></td></tr
><tr
id=sl_svn379_204

><td class="source">      NSValue *a2encoded = [NSValue value:&amp;a2value withObjCType:@encode(__typeof__(a2))]; \<br></td></tr
><tr
id=sl_svn379_205

><td class="source">      if ([a1encoded isEqualToValue:a2encoded]) { \<br></td></tr
><tr
id=sl_svn379_206

><td class="source">        NSString *_expression = [NSString stringWithFormat:@&quot;((%s) != (%s))&quot;, #a1, #a2]; \<br></td></tr
><tr
id=sl_svn379_207

><td class="source">        [self failWithException:([NSException failureInCondition:_expression \<br></td></tr
><tr
id=sl_svn379_208

><td class="source">                         isTrue:NO \<br></td></tr
><tr
id=sl_svn379_209

><td class="source">                         inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_210

><td class="source">                         atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_211

><td class="source">                withDescription:@&quot;%@&quot;, STComposeString(description, ##__VA_ARGS__)])]; \<br></td></tr
><tr
id=sl_svn379_212

><td class="source">      }\<br></td></tr
><tr
id=sl_svn379_213

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_214

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_215

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_216

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat:@&quot;(%s) != (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_217

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_218

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_219

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_220

><td class="source">            withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_221

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_222

><td class="source">} while(0)<br></td></tr
></table></pre>

<pre class="prettyprint "><table id="src_table_1"><tr
id=sl_svn379_223

><td class="source"><br></td></tr
><tr
id=sl_svn379_224

><td class="source">// Generates a failure when a1 is equal to a2. This test is for objects.<br></td></tr
><tr
id=sl_svn379_225

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_226

><td class="source">//    a1: argument 1. object.<br></td></tr
><tr
id=sl_svn379_227

><td class="source">//    a2: argument 2. object.<br></td></tr
><tr
id=sl_svn379_228

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_229

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_230

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_231

><td class="source">#define STAssertNotEqualObjects(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_232

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_233

><td class="source">  @try {\<br></td></tr
><tr
id=sl_svn379_234

><td class="source">    id a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_235

><td class="source">    id a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_236

><td class="source">    if ( (strcmp(@encode(__typeof__(a1value)), @encode(id)) == 0) &amp;&amp; \<br></td></tr
><tr
id=sl_svn379_237

><td class="source">         (strcmp(@encode(__typeof__(a2value)), @encode(id)) == 0) &amp;&amp; \<br></td></tr
><tr
id=sl_svn379_238

><td class="source">         (![(id)a1value isEqual:(id)a2value]) ) continue; \<br></td></tr
><tr
id=sl_svn379_239

><td class="source">    [self failWithException:([NSException failureInEqualityBetweenObject:a1value \<br></td></tr
><tr
id=sl_svn379_240

><td class="source">                  andObject:a2value \<br></td></tr
><tr
id=sl_svn379_241

><td class="source">                     inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_242

><td class="source">                     atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_243

><td class="source">            withDescription:@&quot;%@&quot;, STComposeString(description, ##__VA_ARGS__)])]; \<br></td></tr
><tr
id=sl_svn379_244

><td class="source">  }\<br></td></tr
><tr
id=sl_svn379_245

><td class="source">  @catch (id anException) {\<br></td></tr
><tr
id=sl_svn379_246

><td class="source">    [self failWithException:([NSException failureInRaise:[NSString stringWithFormat:@&quot;(%s) != (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_247

><td class="source">                                               exception:anException \<br></td></tr
><tr
id=sl_svn379_248

><td class="source">                                                  inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_249

><td class="source">                                                  atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_250

><td class="source">                                         withDescription:@&quot;%@&quot;, STComposeString(description, ##__VA_ARGS__)])]; \<br></td></tr
><tr
id=sl_svn379_251

><td class="source">  }\<br></td></tr
><tr
id=sl_svn379_252

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_253

><td class="source"><br></td></tr
><tr
id=sl_svn379_254

><td class="source">// Generates a failure when a1 is not &#39;op&#39; to a2. This test is for C scalars. <br></td></tr
><tr
id=sl_svn379_255

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_256

><td class="source">//    a1: argument 1<br></td></tr
><tr
id=sl_svn379_257

><td class="source">//    a2: argument 2<br></td></tr
><tr
id=sl_svn379_258

><td class="source">//    op: operation<br></td></tr
><tr
id=sl_svn379_259

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_260

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_261

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_262

><td class="source">#define STAssertOperation(a1, a2, op, description, ...) \<br></td></tr
><tr
id=sl_svn379_263

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_264

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_265

><td class="source">    if (strcmp(@encode(__typeof__(a1)), @encode(__typeof__(a2)))) { \<br></td></tr
><tr
id=sl_svn379_266

><td class="source">      [self failWithException:[NSException failureInFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_267

><td class="source">                                                  atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_268

><td class="source">                                         withDescription:[@&quot;Type mismatch -- &quot; stringByAppendingString:STComposeString(description, ##__VA_ARGS__)]]]; \<br></td></tr
><tr
id=sl_svn379_269

><td class="source">    } else { \<br></td></tr
><tr
id=sl_svn379_270

><td class="source">      __typeof__(a1) a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_271

><td class="source">      __typeof__(a2) a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_272

><td class="source">      if (!(a1value op a2value)) { \<br></td></tr
><tr
id=sl_svn379_273

><td class="source">        double a1DoubleValue = a1value; \<br></td></tr
><tr
id=sl_svn379_274

><td class="source">        double a2DoubleValue = a2value; \<br></td></tr
><tr
id=sl_svn379_275

><td class="source">        NSString *_expression = [NSString stringWithFormat:@&quot;(%s (%lg) %s %s (%lg))&quot;, #a1, a1DoubleValue, #op, #a2, a2DoubleValue]; \<br></td></tr
><tr
id=sl_svn379_276

><td class="source">        [self failWithException:([NSException failureInCondition:_expression \<br></td></tr
><tr
id=sl_svn379_277

><td class="source">                         isTrue:NO \<br></td></tr
><tr
id=sl_svn379_278

><td class="source">                         inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_279

><td class="source">                         atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_280

><td class="source">                withDescription:@&quot;%@&quot;, STComposeString(description, ##__VA_ARGS__)])]; \<br></td></tr
><tr
id=sl_svn379_281

><td class="source">      } \<br></td></tr
><tr
id=sl_svn379_282

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_283

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_284

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_285

><td class="source">    [self failWithException:[NSException \<br></td></tr
><tr
id=sl_svn379_286

><td class="source">             failureInRaise:[NSString stringWithFormat:@&quot;(%s) %s (%s)&quot;, #a1, #op, #a2] \<br></td></tr
><tr
id=sl_svn379_287

><td class="source">                  exception:anException \<br></td></tr
><tr
id=sl_svn379_288

><td class="source">                     inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_289

><td class="source">                     atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_290

><td class="source">            withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_291

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_292

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_293

><td class="source"><br></td></tr
><tr
id=sl_svn379_294

><td class="source">// Generates a failure when a1 is not &gt; a2. This test is for C scalars. <br></td></tr
><tr
id=sl_svn379_295

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_296

><td class="source">//    a1: argument 1<br></td></tr
><tr
id=sl_svn379_297

><td class="source">//    a2: argument 2<br></td></tr
><tr
id=sl_svn379_298

><td class="source">//    op: operation<br></td></tr
><tr
id=sl_svn379_299

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_300

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_301

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_302

><td class="source">#define STAssertGreaterThan(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_303

><td class="source">  STAssertOperation(a1, a2, &gt;, description, ##__VA_ARGS__)<br></td></tr
><tr
id=sl_svn379_304

><td class="source"><br></td></tr
><tr
id=sl_svn379_305

><td class="source">// Generates a failure when a1 is not &gt;= a2. This test is for C scalars. <br></td></tr
><tr
id=sl_svn379_306

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_307

><td class="source">//    a1: argument 1<br></td></tr
><tr
id=sl_svn379_308

><td class="source">//    a2: argument 2<br></td></tr
><tr
id=sl_svn379_309

><td class="source">//    op: operation<br></td></tr
><tr
id=sl_svn379_310

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_311

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_312

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_313

><td class="source">#define STAssertGreaterThanOrEqual(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_314

><td class="source">  STAssertOperation(a1, a2, &gt;=, description, ##__VA_ARGS__)<br></td></tr
><tr
id=sl_svn379_315

><td class="source"><br></td></tr
><tr
id=sl_svn379_316

><td class="source">// Generates a failure when a1 is not &lt; a2. This test is for C scalars. <br></td></tr
><tr
id=sl_svn379_317

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_318

><td class="source">//    a1: argument 1<br></td></tr
><tr
id=sl_svn379_319

><td class="source">//    a2: argument 2<br></td></tr
><tr
id=sl_svn379_320

><td class="source">//    op: operation<br></td></tr
><tr
id=sl_svn379_321

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_322

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_323

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_324

><td class="source">#define STAssertLessThan(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_325

><td class="source">  STAssertOperation(a1, a2, &lt;, description, ##__VA_ARGS__)<br></td></tr
><tr
id=sl_svn379_326

><td class="source"><br></td></tr
><tr
id=sl_svn379_327

><td class="source">// Generates a failure when a1 is not &lt;= a2. This test is for C scalars. <br></td></tr
><tr
id=sl_svn379_328

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_329

><td class="source">//    a1: argument 1<br></td></tr
><tr
id=sl_svn379_330

><td class="source">//    a2: argument 2<br></td></tr
><tr
id=sl_svn379_331

><td class="source">//    op: operation<br></td></tr
><tr
id=sl_svn379_332

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_333

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_334

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_335

><td class="source">#define STAssertLessThanOrEqual(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_336

><td class="source">  STAssertOperation(a1, a2, &lt;=, description, ##__VA_ARGS__)<br></td></tr
><tr
id=sl_svn379_337

><td class="source"><br></td></tr
><tr
id=sl_svn379_338

><td class="source">// Generates a failure when string a1 is not equal to string a2. This call<br></td></tr
><tr
id=sl_svn379_339

><td class="source">// differs from STAssertEqualObjects in that strings that are different in<br></td></tr
><tr
id=sl_svn379_340

><td class="source">// composition (precomposed vs decomposed) will compare equal if their final<br></td></tr
><tr
id=sl_svn379_341

><td class="source">// representation is equal.<br></td></tr
><tr
id=sl_svn379_342

><td class="source">// ex O + umlaut decomposed is the same as O + umlaut composed.<br></td></tr
><tr
id=sl_svn379_343

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_344

><td class="source">//    a1: string 1<br></td></tr
><tr
id=sl_svn379_345

><td class="source">//    a2: string 2<br></td></tr
><tr
id=sl_svn379_346

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_347

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_348

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_349

><td class="source">#define STAssertEqualStrings(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_350

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_351

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_352

><td class="source">    id a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_353

><td class="source">    id a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_354

><td class="source">    if (a1value == a2value) continue; \<br></td></tr
><tr
id=sl_svn379_355

><td class="source">    if ([a1value isKindOfClass:[NSString class]] &amp;&amp; \<br></td></tr
><tr
id=sl_svn379_356

><td class="source">        [a2value isKindOfClass:[NSString class]] &amp;&amp; \<br></td></tr
><tr
id=sl_svn379_357

><td class="source">        [a1value compare:a2value options:0] == NSOrderedSame) continue; \<br></td></tr
><tr
id=sl_svn379_358

><td class="source">     [self failWithException:[NSException failureInEqualityBetweenObject: a1value \<br></td></tr
><tr
id=sl_svn379_359

><td class="source">                                                               andObject: a2value \<br></td></tr
><tr
id=sl_svn379_360

><td class="source">                                                                  inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_361

><td class="source">                                                                  atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_362

><td class="source">                                                         withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_363

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_364

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_365

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) == (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_366

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_367

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_368

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_369

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_370

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_371

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_372

><td class="source"><br></td></tr
><tr
id=sl_svn379_373

><td class="source">// Generates a failure when string a1 is equal to string a2. This call<br></td></tr
><tr
id=sl_svn379_374

><td class="source">// differs from STAssertEqualObjects in that strings that are different in<br></td></tr
><tr
id=sl_svn379_375

><td class="source">// composition (precomposed vs decomposed) will compare equal if their final<br></td></tr
><tr
id=sl_svn379_376

><td class="source">// representation is equal.<br></td></tr
><tr
id=sl_svn379_377

><td class="source">// ex O + umlaut decomposed is the same as O + umlaut composed.<br></td></tr
><tr
id=sl_svn379_378

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_379

><td class="source">//    a1: string 1<br></td></tr
><tr
id=sl_svn379_380

><td class="source">//    a2: string 2<br></td></tr
><tr
id=sl_svn379_381

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_382

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_383

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_384

><td class="source">#define STAssertNotEqualStrings(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_385

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_386

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_387

><td class="source">    id a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_388

><td class="source">    id a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_389

><td class="source">    if ([a1value isKindOfClass:[NSString class]] &amp;&amp; \<br></td></tr
><tr
id=sl_svn379_390

><td class="source">        [a2value isKindOfClass:[NSString class]] &amp;&amp; \<br></td></tr
><tr
id=sl_svn379_391

><td class="source">        [a1value compare:a2value options:0] != NSOrderedSame) continue; \<br></td></tr
><tr
id=sl_svn379_392

><td class="source">     [self failWithException:[NSException failureInEqualityBetweenObject: a1value \<br></td></tr
><tr
id=sl_svn379_393

><td class="source">                                                               andObject: a2value \<br></td></tr
><tr
id=sl_svn379_394

><td class="source">                                                                  inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_395

><td class="source">                                                                  atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_396

><td class="source">                                                         withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_397

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_398

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_399

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) != (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_400

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_401

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_402

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_403

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_404

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_405

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_406

><td class="source"><br></td></tr
><tr
id=sl_svn379_407

><td class="source">// Generates a failure when c-string a1 is not equal to c-string a2.<br></td></tr
><tr
id=sl_svn379_408

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_409

><td class="source">//    a1: string 1<br></td></tr
><tr
id=sl_svn379_410

><td class="source">//    a2: string 2<br></td></tr
><tr
id=sl_svn379_411

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_412

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_413

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_414

><td class="source">#define STAssertEqualCStrings(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_415

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_416

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_417

><td class="source">    const char* a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_418

><td class="source">    const char* a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_419

><td class="source">    if (a1value == a2value) continue; \<br></td></tr
><tr
id=sl_svn379_420

><td class="source">    if (strcmp(a1value, a2value) == 0) continue; \<br></td></tr
><tr
id=sl_svn379_421

><td class="source">    [self failWithException:[NSException failureInEqualityBetweenObject: [NSString stringWithUTF8String:a1value] \<br></td></tr
><tr
id=sl_svn379_422

><td class="source">                                                              andObject: [NSString stringWithUTF8String:a2value] \<br></td></tr
><tr
id=sl_svn379_423

><td class="source">                                                                 inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_424

><td class="source">                                                                 atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_425

><td class="source">                                                        withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_426

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_427

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_428

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) == (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_429

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_430

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_431

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_432

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_433

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_434

><td class="source">} while(0)<br></td></tr
></table></pre>

<pre class="prettyprint "><table id="src_table_2"><tr
id=sl_svn379_435

><td class="source"><br></td></tr
><tr
id=sl_svn379_436

><td class="source">// Generates a failure when c-string a1 is equal to c-string a2.<br></td></tr
><tr
id=sl_svn379_437

><td class="source">//  Args:<br></td></tr
><tr
id=sl_svn379_438

><td class="source">//    a1: string 1<br></td></tr
><tr
id=sl_svn379_439

><td class="source">//    a2: string 2<br></td></tr
><tr
id=sl_svn379_440

><td class="source">//    description: A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_441

><td class="source">//                 an empty string but must be present.<br></td></tr
><tr
id=sl_svn379_442

><td class="source">//    ...: A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_443

><td class="source">#define STAssertNotEqualCStrings(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_444

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_445

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_446

><td class="source">    const char* a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_447

><td class="source">    const char* a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_448

><td class="source">    if (strcmp(a1value, a2value) != 0) continue; \<br></td></tr
><tr
id=sl_svn379_449

><td class="source">    [self failWithException:[NSException failureInEqualityBetweenObject: [NSString stringWithUTF8String:a1value] \<br></td></tr
><tr
id=sl_svn379_450

><td class="source">                                                              andObject: [NSString stringWithUTF8String:a2value] \<br></td></tr
><tr
id=sl_svn379_451

><td class="source">                                                                 inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_452

><td class="source">                                                                 atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_453

><td class="source">                                                        withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_454

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_455

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_456

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) != (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_457

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_458

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_459

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_460

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_461

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_462

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_463

><td class="source"><br></td></tr
><tr
id=sl_svn379_464

><td class="source">#if GTM_IPHONE_SDK<br></td></tr
><tr
id=sl_svn379_465

><td class="source"><br></td></tr
><tr
id=sl_svn379_466

><td class="source">// SENTE_BEGIN<br></td></tr
><tr
id=sl_svn379_467

><td class="source">/*&quot; Generates a failure when !{ [a1 isEqualTo:a2] } is false <br></td></tr
><tr
id=sl_svn379_468

><td class="source">	(or one is nil and the other is not). <br></td></tr
><tr
id=sl_svn379_469

><td class="source">	_{a1    The object on the left.}<br></td></tr
><tr
id=sl_svn379_470

><td class="source">	_{a2    The object on the right.}<br></td></tr
><tr
id=sl_svn379_471

><td class="source">	_{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_472

><td class="source">		an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_473

><td class="source">	_{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_474

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_475

><td class="source">#define STAssertEqualObjects(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_476

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_477

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_478

><td class="source">    id a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_479

><td class="source">    id a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_480

><td class="source">    if (a1value == a2value) continue; \<br></td></tr
><tr
id=sl_svn379_481

><td class="source">    if ((strcmp(@encode(__typeof__(a1value)), @encode(id)) == 0) &amp;&amp; \<br></td></tr
><tr
id=sl_svn379_482

><td class="source">        (strcmp(@encode(__typeof__(a2value)), @encode(id)) == 0) &amp;&amp; \<br></td></tr
><tr
id=sl_svn379_483

><td class="source">        [(id)a1value isEqual: (id)a2value]) continue; \<br></td></tr
><tr
id=sl_svn379_484

><td class="source">    [self failWithException:[NSException failureInEqualityBetweenObject: a1value \<br></td></tr
><tr
id=sl_svn379_485

><td class="source">                                                              andObject: a2value \<br></td></tr
><tr
id=sl_svn379_486

><td class="source">                                                                 inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_487

><td class="source">                                                                 atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_488

><td class="source">                                                        withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_489

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_490

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_491

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) == (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_492

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_493

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_494

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_495

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_496

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_497

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_498

><td class="source"><br></td></tr
><tr
id=sl_svn379_499

><td class="source"><br></td></tr
><tr
id=sl_svn379_500

><td class="source">/*&quot; Generates a failure when a1 is not equal to a2. This test is for<br></td></tr
><tr
id=sl_svn379_501

><td class="source">    C scalars, structs and unions.<br></td></tr
><tr
id=sl_svn379_502

><td class="source">    _{a1    The argument on the left.}<br></td></tr
><tr
id=sl_svn379_503

><td class="source">    _{a2    The argument on the right.}<br></td></tr
><tr
id=sl_svn379_504

><td class="source">    _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_505

><td class="source">                        an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_506

><td class="source">    _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_507

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_508

><td class="source">#define STAssertEquals(a1, a2, description, ...) \<br></td></tr
><tr
id=sl_svn379_509

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_510

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_511

><td class="source">    if (strcmp(@encode(__typeof__(a1)), @encode(__typeof__(a2)))) { \<br></td></tr
><tr
id=sl_svn379_512

><td class="source">      [self failWithException:[NSException failureInFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_513

><td class="source">                                                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_514

><td class="source">                                                                        withDescription:[@&quot;Type mismatch -- &quot; stringByAppendingString:STComposeString(description, ##__VA_ARGS__)]]]; \<br></td></tr
><tr
id=sl_svn379_515

><td class="source">    } else { \<br></td></tr
><tr
id=sl_svn379_516

><td class="source">      __typeof__(a1) a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_517

><td class="source">      __typeof__(a2) a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_518

><td class="source">      NSValue *a1encoded = [NSValue value:&amp;a1value withObjCType: @encode(__typeof__(a1))]; \<br></td></tr
><tr
id=sl_svn379_519

><td class="source">      NSValue *a2encoded = [NSValue value:&amp;a2value withObjCType: @encode(__typeof__(a2))]; \<br></td></tr
><tr
id=sl_svn379_520

><td class="source">      if (![a1encoded isEqualToValue:a2encoded]) { \<br></td></tr
><tr
id=sl_svn379_521

><td class="source">        [self failWithException:[NSException failureInEqualityBetweenValue: a1encoded \<br></td></tr
><tr
id=sl_svn379_522

><td class="source">                                                                  andValue: a2encoded \<br></td></tr
><tr
id=sl_svn379_523

><td class="source">                                                              withAccuracy: nil \<br></td></tr
><tr
id=sl_svn379_524

><td class="source">                                                                    inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_525

><td class="source">                                                                    atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_526

><td class="source">                                                           withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_527

><td class="source">      } \<br></td></tr
><tr
id=sl_svn379_528

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_529

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_530

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_531

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) == (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_532

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_533

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_534

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_535

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_536

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_537

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_538

><td class="source"><br></td></tr
><tr
id=sl_svn379_539

><td class="source">#define STAbsoluteDifference(left,right) (MAX(left,right)-MIN(left,right))<br></td></tr
><tr
id=sl_svn379_540

><td class="source"><br></td></tr
><tr
id=sl_svn379_541

><td class="source"><br></td></tr
><tr
id=sl_svn379_542

><td class="source">/*&quot; Generates a failure when a1 is not equal to a2 within + or - accuracy is false. <br></td></tr
><tr
id=sl_svn379_543

><td class="source">  This test is for scalars such as floats and doubles where small differences <br></td></tr
><tr
id=sl_svn379_544

><td class="source">  could make these items not exactly equal, but also works for all scalars.<br></td></tr
><tr
id=sl_svn379_545

><td class="source">  _{a1    The scalar on the left.}<br></td></tr
><tr
id=sl_svn379_546

><td class="source">  _{a2    The scalar on the right.}<br></td></tr
><tr
id=sl_svn379_547

><td class="source">  _{accuracy  The maximum difference between a1 and a2 for these values to be<br></td></tr
><tr
id=sl_svn379_548

><td class="source">  considered equal.}<br></td></tr
><tr
id=sl_svn379_549

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_550

><td class="source">                      an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_551

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_552

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_553

><td class="source"><br></td></tr
><tr
id=sl_svn379_554

><td class="source">#define STAssertEqualsWithAccuracy(a1, a2, accuracy, description, ...) \<br></td></tr
><tr
id=sl_svn379_555

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_556

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_557

><td class="source">    if (strcmp(@encode(__typeof__(a1)), @encode(__typeof__(a2)))) { \<br></td></tr
><tr
id=sl_svn379_558

><td class="source">      [self failWithException:[NSException failureInFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_559

><td class="source">                                                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_560

><td class="source">                                                                        withDescription:[@&quot;Type mismatch -- &quot; stringByAppendingString:STComposeString(description, ##__VA_ARGS__)]]]; \<br></td></tr
><tr
id=sl_svn379_561

><td class="source">    } else { \<br></td></tr
><tr
id=sl_svn379_562

><td class="source">      __typeof__(a1) a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_563

><td class="source">      __typeof__(a2) a2value = (a2); \<br></td></tr
><tr
id=sl_svn379_564

><td class="source">      __typeof__(accuracy) accuracyvalue = (accuracy); \<br></td></tr
><tr
id=sl_svn379_565

><td class="source">      if (STAbsoluteDifference(a1value, a2value) &gt; accuracyvalue) { \<br></td></tr
><tr
id=sl_svn379_566

><td class="source">              NSValue *a1encoded = [NSValue value:&amp;a1value withObjCType:@encode(__typeof__(a1))]; \<br></td></tr
><tr
id=sl_svn379_567

><td class="source">              NSValue *a2encoded = [NSValue value:&amp;a2value withObjCType:@encode(__typeof__(a2))]; \<br></td></tr
><tr
id=sl_svn379_568

><td class="source">              NSValue *accuracyencoded = [NSValue value:&amp;accuracyvalue withObjCType:@encode(__typeof__(accuracy))]; \<br></td></tr
><tr
id=sl_svn379_569

><td class="source">              [self failWithException:[NSException failureInEqualityBetweenValue: a1encoded \<br></td></tr
><tr
id=sl_svn379_570

><td class="source">                                                                        andValue: a2encoded \<br></td></tr
><tr
id=sl_svn379_571

><td class="source">                                                                    withAccuracy: accuracyencoded \<br></td></tr
><tr
id=sl_svn379_572

><td class="source">                                                                          inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_573

><td class="source">                                                                          atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_574

><td class="source">                                                                 withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_575

><td class="source">      } \<br></td></tr
><tr
id=sl_svn379_576

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_577

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_578

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_579

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) == (%s)&quot;, #a1, #a2] \<br></td></tr
><tr
id=sl_svn379_580

><td class="source">                                                                         exception:anException \<br></td></tr
><tr
id=sl_svn379_581

><td class="source">                                                                            inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_582

><td class="source">                                                                            atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_583

><td class="source">                                                                   withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_584

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_585

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_586

><td class="source"><br></td></tr
><tr
id=sl_svn379_587

><td class="source"><br></td></tr
><tr
id=sl_svn379_588

><td class="source"><br></td></tr
><tr
id=sl_svn379_589

><td class="source">/*&quot; Generates a failure unconditionally. <br></td></tr
><tr
id=sl_svn379_590

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_591

><td class="source">                      an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_592

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_593

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_594

><td class="source">#define STFail(description, ...) \<br></td></tr
><tr
id=sl_svn379_595

><td class="source">[self failWithException:[NSException failureInFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_596

><td class="source">                                            atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_597

><td class="source">                                   withDescription: STComposeString(description, ##__VA_ARGS__)]]<br></td></tr
><tr
id=sl_svn379_598

><td class="source"><br></td></tr
><tr
id=sl_svn379_599

><td class="source"><br></td></tr
><tr
id=sl_svn379_600

><td class="source"><br></td></tr
><tr
id=sl_svn379_601

><td class="source">/*&quot; Generates a failure when a1 is not nil.<br></td></tr
><tr
id=sl_svn379_602

><td class="source">  _{a1    An object.}<br></td></tr
><tr
id=sl_svn379_603

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_604

><td class="source">    an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_605

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_606

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_607

><td class="source">#define STAssertNil(a1, description, ...) \<br></td></tr
><tr
id=sl_svn379_608

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_609

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_610

><td class="source">    id a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_611

><td class="source">    if (a1value != nil) { \<br></td></tr
><tr
id=sl_svn379_612

><td class="source">      NSString *_a1 = [NSString stringWithUTF8String: #a1]; \<br></td></tr
><tr
id=sl_svn379_613

><td class="source">      NSString *_expression = [NSString stringWithFormat:@&quot;((%@) == nil)&quot;, _a1]; \<br></td></tr
><tr
id=sl_svn379_614

><td class="source">      [self failWithException:[NSException failureInCondition: _expression \<br></td></tr
><tr
id=sl_svn379_615

><td class="source">                                                       isTrue: NO \<br></td></tr
><tr
id=sl_svn379_616

><td class="source">                                                       inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_617

><td class="source">                                                       atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_618

><td class="source">                                              withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_619

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_620

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_621

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_622

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) == nil fails&quot;, #a1] \<br></td></tr
><tr
id=sl_svn379_623

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_624

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_625

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_626

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_627

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_628

><td class="source">} while(0)<br></td></tr
><tr
id=sl_svn379_629

><td class="source"><br></td></tr
><tr
id=sl_svn379_630

><td class="source"><br></td></tr
><tr
id=sl_svn379_631

><td class="source">/*&quot; Generates a failure when a1 is nil.<br></td></tr
><tr
id=sl_svn379_632

><td class="source">  _{a1    An object.}<br></td></tr
><tr
id=sl_svn379_633

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_634

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_635

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_636

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_637

><td class="source">#define STAssertNotNil(a1, description, ...) \<br></td></tr
><tr
id=sl_svn379_638

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_639

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_640

><td class="source">    id a1value = (a1); \<br></td></tr
><tr
id=sl_svn379_641

><td class="source">    if (a1value == nil) { \<br></td></tr
><tr
id=sl_svn379_642

><td class="source">      NSString *_a1 = [NSString stringWithUTF8String: #a1]; \<br></td></tr
><tr
id=sl_svn379_643

><td class="source">      NSString *_expression = [NSString stringWithFormat:@&quot;((%@) != nil)&quot;, _a1]; \<br></td></tr
><tr
id=sl_svn379_644

><td class="source">      [self failWithException:[NSException failureInCondition: _expression \<br></td></tr
><tr
id=sl_svn379_645

><td class="source">                                                       isTrue: NO \<br></td></tr
><tr
id=sl_svn379_646

><td class="source">                                                       inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_647

><td class="source">                                                       atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_648

><td class="source">                                              withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_649

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_650

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_651

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_652

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) != nil fails&quot;, #a1] \<br></td></tr
><tr
id=sl_svn379_653

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_654

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_655

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_656

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_657

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_658

><td class="source">} while(0)<br></td></tr
></table></pre>

<pre class="prettyprint "><table id="src_table_3"><tr
id=sl_svn379_659

><td class="source"><br></td></tr
><tr
id=sl_svn379_660

><td class="source"><br></td></tr
><tr
id=sl_svn379_661

><td class="source">/*&quot; Generates a failure when expression evaluates to false. <br></td></tr
><tr
id=sl_svn379_662

><td class="source">  _{expr    The expression that is tested.}<br></td></tr
><tr
id=sl_svn379_663

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_664

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_665

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_666

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_667

><td class="source">#define STAssertTrue(expr, description, ...) \<br></td></tr
><tr
id=sl_svn379_668

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_669

><td class="source">  BOOL _evaluatedExpression = (expr); \<br></td></tr
><tr
id=sl_svn379_670

><td class="source">  if (!_evaluatedExpression) { \<br></td></tr
><tr
id=sl_svn379_671

><td class="source">    NSString *_expression = [NSString stringWithUTF8String: #expr]; \<br></td></tr
><tr
id=sl_svn379_672

><td class="source">    [self failWithException:[NSException failureInCondition: _expression \<br></td></tr
><tr
id=sl_svn379_673

><td class="source">                                                     isTrue: NO \<br></td></tr
><tr
id=sl_svn379_674

><td class="source">                                                     inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_675

><td class="source">                                                     atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_676

><td class="source">                                            withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_677

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_678

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_679

><td class="source"><br></td></tr
><tr
id=sl_svn379_680

><td class="source"><br></td></tr
><tr
id=sl_svn379_681

><td class="source">/*&quot; Generates a failure when expression evaluates to false and in addition will <br></td></tr
><tr
id=sl_svn379_682

><td class="source">  generate error messages if an exception is encountered. <br></td></tr
><tr
id=sl_svn379_683

><td class="source">  _{expr    The expression that is tested.}<br></td></tr
><tr
id=sl_svn379_684

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_685

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_686

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_687

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_688

><td class="source">#define STAssertTrueNoThrow(expr, description, ...) \<br></td></tr
><tr
id=sl_svn379_689

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_690

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_691

><td class="source">    BOOL _evaluatedExpression = (expr); \<br></td></tr
><tr
id=sl_svn379_692

><td class="source">    if (!_evaluatedExpression) { \<br></td></tr
><tr
id=sl_svn379_693

><td class="source">      NSString *_expression = [NSString stringWithUTF8String: #expr]; \<br></td></tr
><tr
id=sl_svn379_694

><td class="source">      [self failWithException:[NSException failureInCondition: _expression \<br></td></tr
><tr
id=sl_svn379_695

><td class="source">                                                       isTrue: NO \<br></td></tr
><tr
id=sl_svn379_696

><td class="source">                                                       inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_697

><td class="source">                                                       atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_698

><td class="source">                                              withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_699

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_700

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_701

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_702

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;(%s) &quot;, #expr] \<br></td></tr
><tr
id=sl_svn379_703

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_704

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_705

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_706

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_707

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_708

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_709

><td class="source"><br></td></tr
><tr
id=sl_svn379_710

><td class="source"><br></td></tr
><tr
id=sl_svn379_711

><td class="source">/*&quot; Generates a failure when the expression evaluates to true. <br></td></tr
><tr
id=sl_svn379_712

><td class="source">  _{expr    The expression that is tested.}<br></td></tr
><tr
id=sl_svn379_713

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_714

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_715

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_716

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_717

><td class="source">#define STAssertFalse(expr, description, ...) \<br></td></tr
><tr
id=sl_svn379_718

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_719

><td class="source">  BOOL _evaluatedExpression = (expr); \<br></td></tr
><tr
id=sl_svn379_720

><td class="source">  if (_evaluatedExpression) { \<br></td></tr
><tr
id=sl_svn379_721

><td class="source">    NSString *_expression = [NSString stringWithUTF8String: #expr]; \<br></td></tr
><tr
id=sl_svn379_722

><td class="source">    [self failWithException:[NSException failureInCondition: _expression \<br></td></tr
><tr
id=sl_svn379_723

><td class="source">                                                     isTrue: YES \<br></td></tr
><tr
id=sl_svn379_724

><td class="source">                                                     inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_725

><td class="source">                                                     atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_726

><td class="source">                                            withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_727

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_728

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_729

><td class="source"><br></td></tr
><tr
id=sl_svn379_730

><td class="source"><br></td></tr
><tr
id=sl_svn379_731

><td class="source">/*&quot; Generates a failure when the expression evaluates to true and in addition <br></td></tr
><tr
id=sl_svn379_732

><td class="source">  will generate error messages if an exception is encountered.<br></td></tr
><tr
id=sl_svn379_733

><td class="source">  _{expr    The expression that is tested.}<br></td></tr
><tr
id=sl_svn379_734

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_735

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_736

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_737

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_738

><td class="source">#define STAssertFalseNoThrow(expr, description, ...) \<br></td></tr
><tr
id=sl_svn379_739

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_740

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_741

><td class="source">    BOOL _evaluatedExpression = (expr); \<br></td></tr
><tr
id=sl_svn379_742

><td class="source">    if (_evaluatedExpression) { \<br></td></tr
><tr
id=sl_svn379_743

><td class="source">      NSString *_expression = [NSString stringWithUTF8String: #expr]; \<br></td></tr
><tr
id=sl_svn379_744

><td class="source">      [self failWithException:[NSException failureInCondition: _expression \<br></td></tr
><tr
id=sl_svn379_745

><td class="source">                                                       isTrue: YES \<br></td></tr
><tr
id=sl_svn379_746

><td class="source">                                                       inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_747

><td class="source">                                                       atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_748

><td class="source">                                              withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_749

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_750

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_751

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_752

><td class="source">    [self failWithException:[NSException failureInRaise:[NSString stringWithFormat: @&quot;!(%s) &quot;, #expr] \<br></td></tr
><tr
id=sl_svn379_753

><td class="source">                                              exception:anException \<br></td></tr
><tr
id=sl_svn379_754

><td class="source">                                                 inFile:[NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_755

><td class="source">                                                 atLine:__LINE__ \<br></td></tr
><tr
id=sl_svn379_756

><td class="source">                                        withDescription:STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_757

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_758

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_759

><td class="source"><br></td></tr
><tr
id=sl_svn379_760

><td class="source"><br></td></tr
><tr
id=sl_svn379_761

><td class="source">/*&quot; Generates a failure when expression does not throw an exception. <br></td></tr
><tr
id=sl_svn379_762

><td class="source">  _{expression    The expression that is evaluated.}<br></td></tr
><tr
id=sl_svn379_763

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_764

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_765

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.<br></td></tr
><tr
id=sl_svn379_766

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_767

><td class="source">#define STAssertThrows(expr, description, ...) \<br></td></tr
><tr
id=sl_svn379_768

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_769

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_770

><td class="source">    (expr); \<br></td></tr
><tr
id=sl_svn379_771

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_772

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_773

><td class="source">    continue; \<br></td></tr
><tr
id=sl_svn379_774

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_775

><td class="source">  [self failWithException:[NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_776

><td class="source">                                            exception: nil \<br></td></tr
><tr
id=sl_svn379_777

><td class="source">                                               inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_778

><td class="source">                                               atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_779

><td class="source">                                      withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_780

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_781

><td class="source"><br></td></tr
><tr
id=sl_svn379_782

><td class="source"><br></td></tr
><tr
id=sl_svn379_783

><td class="source">/*&quot; Generates a failure when expression does not throw an exception of a <br></td></tr
><tr
id=sl_svn379_784

><td class="source">  specific class. <br></td></tr
><tr
id=sl_svn379_785

><td class="source">  _{expression    The expression that is evaluated.}<br></td></tr
><tr
id=sl_svn379_786

><td class="source">  _{specificException    The specified class of the exception.}<br></td></tr
><tr
id=sl_svn379_787

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_788

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_789

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_790

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_791

><td class="source">#define STAssertThrowsSpecific(expr, specificException, description, ...) \<br></td></tr
><tr
id=sl_svn379_792

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_793

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_794

><td class="source">    (expr); \<br></td></tr
><tr
id=sl_svn379_795

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_796

><td class="source">  @catch (specificException *anException) { \<br></td></tr
><tr
id=sl_svn379_797

><td class="source">    continue; \<br></td></tr
><tr
id=sl_svn379_798

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_799

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_800

><td class="source">    NSString *_descrip = STComposeString(@&quot;(Expected exception: %@) %@&quot;, NSStringFromClass([specificException class]), description); \<br></td></tr
><tr
id=sl_svn379_801

><td class="source">    [self failWithException:[NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_802

><td class="source">                                              exception: anException \<br></td></tr
><tr
id=sl_svn379_803

><td class="source">                                                 inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_804

><td class="source">                                                 atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_805

><td class="source">                                        withDescription: STComposeString(_descrip, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_806

><td class="source">                                            continue; \<br></td></tr
><tr
id=sl_svn379_807

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_808

><td class="source">  NSString *_descrip = STComposeString(@&quot;(Expected exception: %@) %@&quot;, NSStringFromClass([specificException class]), description); \<br></td></tr
><tr
id=sl_svn379_809

><td class="source">  [self failWithException:[NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_810

><td class="source">                                            exception: nil \<br></td></tr
><tr
id=sl_svn379_811

><td class="source">                                               inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_812

><td class="source">                                               atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_813

><td class="source">                                      withDescription: STComposeString(_descrip, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_814

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_815

><td class="source"><br></td></tr
><tr
id=sl_svn379_816

><td class="source"><br></td></tr
><tr
id=sl_svn379_817

><td class="source">/*&quot; Generates a failure when expression does not throw an exception of a <br></td></tr
><tr
id=sl_svn379_818

><td class="source">  specific class with a specific name.  Useful for those frameworks like<br></td></tr
><tr
id=sl_svn379_819

><td class="source">  AppKit or Foundation that throw generic NSException w/specific names <br></td></tr
><tr
id=sl_svn379_820

><td class="source">  (NSInvalidArgumentException, etc).<br></td></tr
><tr
id=sl_svn379_821

><td class="source">  _{expression    The expression that is evaluated.}<br></td></tr
><tr
id=sl_svn379_822

><td class="source">  _{specificException    The specified class of the exception.}<br></td></tr
><tr
id=sl_svn379_823

><td class="source">  _{aName    The name of the specified exception.}<br></td></tr
><tr
id=sl_svn379_824

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_825

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_826

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_827

><td class="source"><br></td></tr
><tr
id=sl_svn379_828

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_829

><td class="source">#define STAssertThrowsSpecificNamed(expr, specificException, aName, description, ...) \<br></td></tr
><tr
id=sl_svn379_830

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_831

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_832

><td class="source">    (expr); \<br></td></tr
><tr
id=sl_svn379_833

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_834

><td class="source">  @catch (specificException *anException) { \<br></td></tr
><tr
id=sl_svn379_835

><td class="source">    if ([aName isEqualToString: [anException name]]) continue; \<br></td></tr
><tr
id=sl_svn379_836

><td class="source">    NSString *_descrip = STComposeString(@&quot;(Expected exception: %@ (name: %@)) %@&quot;, NSStringFromClass([specificException class]), aName, description); \<br></td></tr
><tr
id=sl_svn379_837

><td class="source">    [self failWithException: \<br></td></tr
><tr
id=sl_svn379_838

><td class="source">      [NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_839

><td class="source">                        exception: anException \<br></td></tr
><tr
id=sl_svn379_840

><td class="source">                           inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_841

><td class="source">                           atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_842

><td class="source">                  withDescription: STComposeString(_descrip, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_843

><td class="source">    continue; \<br></td></tr
><tr
id=sl_svn379_844

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_845

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_846

><td class="source">    NSString *_descrip = STComposeString(@&quot;(Expected exception: %@) %@&quot;, NSStringFromClass([specificException class]), description); \<br></td></tr
><tr
id=sl_svn379_847

><td class="source">    [self failWithException: \<br></td></tr
><tr
id=sl_svn379_848

><td class="source">      [NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_849

><td class="source">                        exception: anException \<br></td></tr
><tr
id=sl_svn379_850

><td class="source">                           inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_851

><td class="source">                           atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_852

><td class="source">                  withDescription: STComposeString(_descrip, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_853

><td class="source">    continue; \<br></td></tr
><tr
id=sl_svn379_854

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_855

><td class="source">  NSString *_descrip = STComposeString(@&quot;(Expected exception: %@) %@&quot;, NSStringFromClass([specificException class]), description); \<br></td></tr
><tr
id=sl_svn379_856

><td class="source">  [self failWithException: \<br></td></tr
><tr
id=sl_svn379_857

><td class="source">    [NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_858

><td class="source">                      exception: nil \<br></td></tr
><tr
id=sl_svn379_859

><td class="source">                         inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_860

><td class="source">                         atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_861

><td class="source">                withDescription: STComposeString(_descrip, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_862

><td class="source">} while (0)<br></td></tr
></table></pre>

<pre class="prettyprint "><table id="src_table_4"><tr
id=sl_svn379_863

><td class="source"><br></td></tr
><tr
id=sl_svn379_864

><td class="source"><br></td></tr
><tr
id=sl_svn379_865

><td class="source">/*&quot; Generates a failure when expression does throw an exception. <br></td></tr
><tr
id=sl_svn379_866

><td class="source">  _{expression    The expression that is evaluated.}<br></td></tr
><tr
id=sl_svn379_867

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_868

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_869

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_870

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_871

><td class="source">#define STAssertNoThrow(expr, description, ...) \<br></td></tr
><tr
id=sl_svn379_872

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_873

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_874

><td class="source">    (expr); \<br></td></tr
><tr
id=sl_svn379_875

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_876

><td class="source">  @catch (id anException) { \<br></td></tr
><tr
id=sl_svn379_877

><td class="source">    [self failWithException:[NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_878

><td class="source">                                              exception: anException \<br></td></tr
><tr
id=sl_svn379_879

><td class="source">                                                 inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_880

><td class="source">                                                 atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_881

><td class="source">                                        withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_882

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_883

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_884

><td class="source"><br></td></tr
><tr
id=sl_svn379_885

><td class="source"><br></td></tr
><tr
id=sl_svn379_886

><td class="source">/*&quot; Generates a failure when expression does throw an exception of the specitied<br></td></tr
><tr
id=sl_svn379_887

><td class="source">  class. Any other exception is okay (i.e. does not generate a failure).<br></td></tr
><tr
id=sl_svn379_888

><td class="source">  _{expression    The expression that is evaluated.}<br></td></tr
><tr
id=sl_svn379_889

><td class="source">  _{specificException    The specified class of the exception.}<br></td></tr
><tr
id=sl_svn379_890

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_891

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_892

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_893

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_894

><td class="source">#define STAssertNoThrowSpecific(expr, specificException, description, ...) \<br></td></tr
><tr
id=sl_svn379_895

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_896

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_897

><td class="source">    (expr); \<br></td></tr
><tr
id=sl_svn379_898

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_899

><td class="source">  @catch (specificException *anException) { \<br></td></tr
><tr
id=sl_svn379_900

><td class="source">    [self failWithException:[NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_901

><td class="source">                                              exception: anException \<br></td></tr
><tr
id=sl_svn379_902

><td class="source">                                                 inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_903

><td class="source">                                                 atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_904

><td class="source">                                        withDescription: STComposeString(description, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_905

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_906

><td class="source">  @catch (id anythingElse) { \<br></td></tr
><tr
id=sl_svn379_907

><td class="source">    ; \<br></td></tr
><tr
id=sl_svn379_908

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_909

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_910

><td class="source"><br></td></tr
><tr
id=sl_svn379_911

><td class="source"><br></td></tr
><tr
id=sl_svn379_912

><td class="source">/*&quot; Generates a failure when expression does throw an exception of a <br></td></tr
><tr
id=sl_svn379_913

><td class="source">  specific class with a specific name.  Useful for those frameworks like<br></td></tr
><tr
id=sl_svn379_914

><td class="source">  AppKit or Foundation that throw generic NSException w/specific names <br></td></tr
><tr
id=sl_svn379_915

><td class="source">  (NSInvalidArgumentException, etc).<br></td></tr
><tr
id=sl_svn379_916

><td class="source">  _{expression    The expression that is evaluated.}<br></td></tr
><tr
id=sl_svn379_917

><td class="source">  _{specificException    The specified class of the exception.}<br></td></tr
><tr
id=sl_svn379_918

><td class="source">  _{aName    The name of the specified exception.}<br></td></tr
><tr
id=sl_svn379_919

><td class="source">  _{description A format string as in the printf() function. Can be nil or<br></td></tr
><tr
id=sl_svn379_920

><td class="source">  an empty string but must be present.}<br></td></tr
><tr
id=sl_svn379_921

><td class="source">  _{... A variable number of arguments to the format string. Can be absent.}<br></td></tr
><tr
id=sl_svn379_922

><td class="source"><br></td></tr
><tr
id=sl_svn379_923

><td class="source">&quot;*/<br></td></tr
><tr
id=sl_svn379_924

><td class="source">#define STAssertNoThrowSpecificNamed(expr, specificException, aName, description, ...) \<br></td></tr
><tr
id=sl_svn379_925

><td class="source">do { \<br></td></tr
><tr
id=sl_svn379_926

><td class="source">  @try { \<br></td></tr
><tr
id=sl_svn379_927

><td class="source">    (expr); \<br></td></tr
><tr
id=sl_svn379_928

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_929

><td class="source">  @catch (specificException *anException) { \<br></td></tr
><tr
id=sl_svn379_930

><td class="source">    if ([aName isEqualToString: [anException name]]) { \<br></td></tr
><tr
id=sl_svn379_931

><td class="source">      NSString *_descrip = STComposeString(@&quot;(Expected exception: %@ (name: %@)) %@&quot;, NSStringFromClass([specificException class]), aName, description); \<br></td></tr
><tr
id=sl_svn379_932

><td class="source">      [self failWithException: \<br></td></tr
><tr
id=sl_svn379_933

><td class="source">        [NSException failureInRaise: [NSString stringWithUTF8String:#expr] \<br></td></tr
><tr
id=sl_svn379_934

><td class="source">                          exception: anException \<br></td></tr
><tr
id=sl_svn379_935

><td class="source">                             inFile: [NSString stringWithUTF8String:__FILE__] \<br></td></tr
><tr
id=sl_svn379_936

><td class="source">                             atLine: __LINE__ \<br></td></tr
><tr
id=sl_svn379_937

><td class="source">                    withDescription: STComposeString(_descrip, ##__VA_ARGS__)]]; \<br></td></tr
><tr
id=sl_svn379_938

><td class="source">    } \<br></td></tr
><tr
id=sl_svn379_939

><td class="source">    continue; \<br></td></tr
><tr
id=sl_svn379_940

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_941

><td class="source">  @catch (id anythingElse) { \<br></td></tr
><tr
id=sl_svn379_942

><td class="source">    ; \<br></td></tr
><tr
id=sl_svn379_943

><td class="source">  } \<br></td></tr
><tr
id=sl_svn379_944

><td class="source">} while (0)<br></td></tr
><tr
id=sl_svn379_945

><td class="source"><br></td></tr
><tr
id=sl_svn379_946

><td class="source"><br></td></tr
><tr
id=sl_svn379_947

><td class="source"><br></td></tr
><tr
id=sl_svn379_948

><td class="source">@interface NSException (GTMSenTestAdditions)<br></td></tr
><tr
id=sl_svn379_949

><td class="source">+ (NSException *)failureInFile:(NSString *)filename <br></td></tr
><tr
id=sl_svn379_950

><td class="source">                        atLine:(int)lineNumber <br></td></tr
><tr
id=sl_svn379_951

><td class="source">               withDescription:(NSString *)formatString, ...;<br></td></tr
><tr
id=sl_svn379_952

><td class="source">+ (NSException *)failureInCondition:(NSString *)condition <br></td></tr
><tr
id=sl_svn379_953

><td class="source">                             isTrue:(BOOL)isTrue <br></td></tr
><tr
id=sl_svn379_954

><td class="source">                             inFile:(NSString *)filename <br></td></tr
><tr
id=sl_svn379_955

><td class="source">                             atLine:(int)lineNumber <br></td></tr
><tr
id=sl_svn379_956

><td class="source">                    withDescription:(NSString *)formatString, ...;<br></td></tr
><tr
id=sl_svn379_957

><td class="source">+ (NSException *)failureInEqualityBetweenObject:(id)left<br></td></tr
><tr
id=sl_svn379_958

><td class="source">                                      andObject:(id)right<br></td></tr
><tr
id=sl_svn379_959

><td class="source">                                         inFile:(NSString *)filename<br></td></tr
><tr
id=sl_svn379_960

><td class="source">                                         atLine:(int)lineNumber<br></td></tr
><tr
id=sl_svn379_961

><td class="source">                                withDescription:(NSString *)formatString, ...;<br></td></tr
><tr
id=sl_svn379_962

><td class="source">+ (NSException *)failureInEqualityBetweenValue:(NSValue *)left <br></td></tr
><tr
id=sl_svn379_963

><td class="source">                                      andValue:(NSValue *)right <br></td></tr
><tr
id=sl_svn379_964

><td class="source">                                  withAccuracy:(NSValue *)accuracy <br></td></tr
><tr
id=sl_svn379_965

><td class="source">                                        inFile:(NSString *)filename <br></td></tr
><tr
id=sl_svn379_966

><td class="source">                                        atLine:(int) ineNumber<br></td></tr
><tr
id=sl_svn379_967

><td class="source">                               withDescription:(NSString *)formatString, ...;<br></td></tr
><tr
id=sl_svn379_968

><td class="source">+ (NSException *)failureInRaise:(NSString *)expression <br></td></tr
><tr
id=sl_svn379_969

><td class="source">                         inFile:(NSString *)filename <br></td></tr
><tr
id=sl_svn379_970

><td class="source">                         atLine:(int)lineNumber<br></td></tr
><tr
id=sl_svn379_971

><td class="source">                withDescription:(NSString *)formatString, ...;<br></td></tr
><tr
id=sl_svn379_972

><td class="source">+ (NSException *)failureInRaise:(NSString *)expression <br></td></tr
><tr
id=sl_svn379_973

><td class="source">                      exception:(NSException *)exception <br></td></tr
><tr
id=sl_svn379_974

><td class="source">                         inFile:(NSString *)filename <br></td></tr
><tr
id=sl_svn379_975

><td class="source">                         atLine:(int)lineNumber <br></td></tr
><tr
id=sl_svn379_976

><td class="source">                withDescription:(NSString *)formatString, ...;<br></td></tr
><tr
id=sl_svn379_977

><td class="source">@end<br></td></tr
><tr
id=sl_svn379_978

><td class="source"><br></td></tr
><tr
id=sl_svn379_979

><td class="source">// SENTE_END<br></td></tr
><tr
id=sl_svn379_980

><td class="source"><br></td></tr
><tr
id=sl_svn379_981

><td class="source">@protocol SenTestCase<br></td></tr
><tr
id=sl_svn379_982

><td class="source">+ (id)testCaseWithInvocation:(NSInvocation *)anInvocation;<br></td></tr
><tr
id=sl_svn379_983

><td class="source">- (id)initWithInvocation:(NSInvocation *)anInvocation;<br></td></tr
><tr
id=sl_svn379_984

><td class="source">- (void)setUp;<br></td></tr
><tr
id=sl_svn379_985

><td class="source">- (void)invokeTest;<br></td></tr
><tr
id=sl_svn379_986

><td class="source">- (void)tearDown;<br></td></tr
><tr
id=sl_svn379_987

><td class="source">- (void)performTest;<br></td></tr
><tr
id=sl_svn379_988

><td class="source">- (void)failWithException:(NSException*)exception;<br></td></tr
><tr
id=sl_svn379_989

><td class="source">- (NSInvocation *)invocation;<br></td></tr
><tr
id=sl_svn379_990

><td class="source">- (SEL)selector;<br></td></tr
><tr
id=sl_svn379_991

><td class="source">+ (NSArray *)testInvocations;<br></td></tr
><tr
id=sl_svn379_992

><td class="source">@end<br></td></tr
><tr
id=sl_svn379_993

><td class="source"><br></td></tr
><tr
id=sl_svn379_994

><td class="source">@interface SenTestCase : NSObject&lt;SenTestCase&gt; {<br></td></tr
><tr
id=sl_svn379_995

><td class="source"> @private<br></td></tr
><tr
id=sl_svn379_996

><td class="source">  NSInvocation *invocation_;<br></td></tr
><tr
id=sl_svn379_997

><td class="source">}<br></td></tr
><tr
id=sl_svn379_998

><td class="source">@end<br></td></tr
><tr
id=sl_svn379_999

><td class="source"><br></td></tr
><tr
id=sl_svn379_1000

><td class="source">GTM_EXTERN NSString *const SenTestFailureException;<br></td></tr
><tr
id=sl_svn379_1001

><td class="source"><br></td></tr
><tr
id=sl_svn379_1002

><td class="source">GTM_EXTERN NSString *const SenTestFilenameKey;<br></td></tr
><tr
id=sl_svn379_1003

><td class="source">GTM_EXTERN NSString *const SenTestLineNumberKey;<br></td></tr
><tr
id=sl_svn379_1004

><td class="source"><br></td></tr
><tr
id=sl_svn379_1005

><td class="source">#endif // GTM_IPHONE_SDK<br></td></tr
><tr
id=sl_svn379_1006

><td class="source"><br></td></tr
><tr
id=sl_svn379_1007

><td class="source">// All unittest cases in GTM should inherit from GTMTestCase. It makes sure<br></td></tr
><tr
id=sl_svn379_1008

><td class="source">// to set up our logging system correctly to verify logging calls.<br></td></tr
><tr
id=sl_svn379_1009

><td class="source">// See GTMUnitTestDevLog.h for details<br></td></tr
><tr
id=sl_svn379_1010

><td class="source">@interface GTMTestCase : SenTestCase<br></td></tr
><tr
id=sl_svn379_1011

><td class="source"><br></td></tr
><tr
id=sl_svn379_1012

><td class="source">// Returns YES if this is an abstract testCase class as opposed to a concrete<br></td></tr
><tr
id=sl_svn379_1013

><td class="source">// testCase class that you want tests run against. SenTestCase is not designed<br></td></tr
><tr
id=sl_svn379_1014

><td class="source">// out of the box to handle an abstract class hierarchy descending from it with<br></td></tr
><tr
id=sl_svn379_1015

><td class="source">// some concrete subclasses.  In some cases we want all the &quot;concrete&quot;<br></td></tr
><tr
id=sl_svn379_1016

><td class="source">// subclasses of an abstract subclass of SenTestCase to run a test, but we don&#39;t<br></td></tr
><tr
id=sl_svn379_1017

><td class="source">// want that test to be run against an instance of an abstract subclass itself.<br></td></tr
><tr
id=sl_svn379_1018

><td class="source">// By returning &quot;YES&quot; here, the tests defined by this class won&#39;t be run against<br></td></tr
><tr
id=sl_svn379_1019

><td class="source">// an instance of this class. As an example class hierarchy:<br></td></tr
><tr
id=sl_svn379_1020

><td class="source">//<br></td></tr
><tr
id=sl_svn379_1021

><td class="source">//                                            FooExtensionTestCase<br></td></tr
><tr
id=sl_svn379_1022

><td class="source">// GTMTestCase &lt;- ExtensionAbstractTestCase &lt;<br></td></tr
><tr
id=sl_svn379_1023

><td class="source">//                                            BarExtensionTestCase<br></td></tr
><tr
id=sl_svn379_1024

><td class="source">// <br></td></tr
><tr
id=sl_svn379_1025

><td class="source">// So FooExtensionTestCase and BarExtensionTestCase inherit from<br></td></tr
><tr
id=sl_svn379_1026

><td class="source">// ExtensionAbstractTestCase (and probably FooExtension and BarExtension inherit<br></td></tr
><tr
id=sl_svn379_1027

><td class="source">// from a class named Extension). We want the tests in ExtensionAbstractTestCase<br></td></tr
><tr
id=sl_svn379_1028

><td class="source">// to be run as part of FooExtensionTestCase and BarExtensionTestCase, but we<br></td></tr
><tr
id=sl_svn379_1029

><td class="source">// don&#39;t want them run against ExtensionAbstractTestCase. The default<br></td></tr
><tr
id=sl_svn379_1030

><td class="source">// implementation checks to see if the name of the class contains the word<br></td></tr
><tr
id=sl_svn379_1031

><td class="source">// &quot;AbstractTest&quot; (case sensitive).<br></td></tr
><tr
id=sl_svn379_1032

><td class="source">+ (BOOL)isAbstractTestCase;<br></td></tr
><tr
id=sl_svn379_1033

><td class="source"><br></td></tr
><tr
id=sl_svn379_1034

><td class="source">@end<br></td></tr
></table></pre>

<pre class="prettyprint"><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn379_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn379_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta('', 'p', 'google-toolbox-for-mac', this)">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta('', 'p', 'google-toolbox-for-mac', this)">Hide details</a>
 </div>
 <div class="ifExpand">
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/google-toolbox-for-mac/source/detail?spec=svn393&r=379">r379</a>
 by gtm.daemon
 on Jul 20, 2010
 &nbsp; <a href="/p/google-toolbox-for-mac/source/diff?spec=svn393&r=379&amp;format=side&amp;path=/trunk/UnitTesting/GTMSenTestCase.h&amp;old_path=/trunk/UnitTesting/GTMSenTestCase.h&amp;old=226">Diff</a>
 </div>
 <pre>[Author: dmaclach]

Clean up GTMSenTest so that the test
predicates match more closely the ones
supplied with SenTest
and also gets rid of &quot;Using NULL in
arithmetic&quot; warnings when running through
C++ compiler.

R=grobbins
DELTA=62  (0 added, 8 deleted, 54 changed)</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/google-toolbox-for-mac/source/detail?r=379&spec=svn393';
 var publish_url = '/p/google-toolbox-for-mac/source/detail?r=379&spec=svn393#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/UnitTesting/GTMSenTestCase.h');
 changed_urls.push('/p/google-toolbox-for-mac/source/browse/trunk/UnitTesting/GTMSenTestCase.h?r=379&spec=svn393');
 
 var selected_path = '/trunk/UnitTesting/GTMSenTestCase.h';
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>
 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/google-toolbox-for-mac/source/browse/trunk/UnitTesting/GTMSenTestCase.h?r=379&amp;spec=svn393"
 selected="selected"
 >/trunk/UnitTesting/GTMSenTestCase.h</option>
 
 </select>
 </td></tr></table>
 
 
 



 <div style="white-space:nowrap">
 Project members,
 <a href="https://www.google.com/accounts/ServiceLogin?service=code&amp;ltmpl=phosting&amp;continue=http%3A%2F%2Fcode.google.com%2Fp%2Fgoogle-toolbox-for-mac%2Fsource%2Fbrowse%2Ftrunk%2FUnitTesting%2FGTMSenTestCase.h&amp;followup=http%3A%2F%2Fcode.google.com%2Fp%2Fgoogle-toolbox-for-mac%2Fsource%2Fbrowse%2Ftrunk%2FUnitTesting%2FGTMSenTestCase.h"
 >sign in</a> to write a code review</div>


 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/google-toolbox-for-mac/source/detail?spec=svn393&r=226">r226</a>
 by gtm.daemon
 on Sep 18, 2009
 &nbsp; <a href="/p/google-toolbox-for-mac/source/diff?spec=svn393&r=226&amp;format=side&amp;path=/trunk/UnitTesting/GTMSenTestCase.h&amp;old_path=/trunk/UnitTesting/GTMSenTestCase.h&amp;old=222">Diff</a>
 <br>
 <pre class="ifOpened">[Author: dmaclach]

Makes GTMSenTestCase work better with
abstract test classes in cases where
we want to tag a class as being an
...</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/google-toolbox-for-mac/source/detail?spec=svn393&r=222">r222</a>
 by gtm.daemon
 on Sep 16, 2009
 &nbsp; <a href="/p/google-toolbox-for-mac/source/diff?spec=svn393&r=222&amp;format=side&amp;path=/trunk/UnitTesting/GTMSenTestCase.h&amp;old_path=/trunk/UnitTesting/GTMSenTestCase.h&amp;old=221">Diff</a>
 <br>
 <pre class="ifOpened">[Author: dmaclach]

Fix up the unit testing stack that I
broke on iPhone. This makes the
unittesting stuff on iPhone
...</pre>
 </div>
 
 <div class="closed" style="margin-bottom:3px;" >
 <img class="ifClosed" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/plus.gif" >
 <img class="ifOpened" onclick="_toggleHidden(this)" src="http://www.gstatic.com/codesite/ph/images/minus.gif" >
 <a href="/p/google-toolbox-for-mac/source/detail?spec=svn393&r=221">r221</a>
 by gtm.daemon
 on Sep 16, 2009
 &nbsp; <a href="/p/google-toolbox-for-mac/source/diff?spec=svn393&r=221&amp;format=side&amp;path=/trunk/UnitTesting/GTMSenTestCase.h&amp;old_path=/trunk/UnitTesting/GTMSenTestCase.h&amp;old=218">Diff</a>
 <br>
 <pre class="ifOpened">[Author: altse]

 Fix syntax error in
STAssertEqualObjects

...</pre>
 </div>
 
 
 <a href="/p/google-toolbox-for-mac/source/list?path=/trunk/UnitTesting/GTMSenTestCase.h&start=379">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 51195 bytes,
 1034 lines</div>
 
 <div><a href="http://google-toolbox-for-mac.googlecode.com/svn/trunk/UnitTesting/GTMSenTestCase.h">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>
</div>

 <script src="http://www.gstatic.com/codesite/ph/14756227129406843427/js/prettify/prettify.js"></script>

<script type="text/javascript">prettyPrint();</script>

<script src="http://www.gstatic.com/codesite/ph/14756227129406843427/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="http://kibbles.googlecode.com/files/kibbles-1.3.1.comp.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initilized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initilized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initilized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initilized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 }
 window.onload = function() {keysOnLoadHandler();};
 </script>

<!-- code review support -->
<script src="http://www.gstatic.com/codesite/ph/14756227129406843427/js/code_review_scripts.js"></script>
<script type="text/javascript">
 
 // the comment form template
 var form = '<div class="draft"><div class="header"><span class="title">Draft comment:</span></div>' +
 '<div class="body"><form onsubmit="return false;"><textarea id="$ID">$BODY</textarea><br>$ACTIONS</form></div>' +
 '</div>';
 // the comment "plate" template used for both draft and published comment "plates".
 var draft_comment = '<div class="draft" ondblclick="$ONDBLCLICK">' +
 '<div class="header"><span class="title">Draft comment:</span><span class="actions">$ACTIONS</span></div>' +
 '<pre id="$ID" class="body">$BODY</pre>' +
 '</div>';
 var published_comment = '<div class="published">' +
 '<div class="header"><span class="title"><a href="$PROFILE_URL">$AUTHOR:</a></span><div>' +
 '<pre id="$ID" class="body">$BODY</pre>' +
 '</div>';

 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn379': '/trunk/UnitTesting/GTMSenTestCase.h'}
 CR_setup('', 'p', 'google-toolbox-for-mac', '', 'svn393', paths,
 '', CR_BrowseIntegrationFactory);
 // register our hidden ui elements with the code commenting code ui builder.
 CR_registerLayoutElement('form', form);
 CR_registerLayoutElement('draft_comment', draft_comment);
 CR_registerLayoutElement('published_comment', published_comment);
 
 CR_registerActivityListener(CR_ACTIVITY_TYPE.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 CR_registerActivityListener(CR_ACTIVITY_TYPE.REVEAL_PUB_PLATE, pubRevealed);
 CR_registerActivityListener(CR_ACTIVITY_TYPE.REVEAL_DRAFT_PLATE, draftRevealed);
 CR_registerActivityListener(CR_ACTIVITY_TYPE.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 
 
 var initilized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};
</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/14756227129406843427/js/dit_scripts.js"></script>

 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/14756227129406843427/js/core_scripts_20081103.js"></script>
 <script type="text/javascript" src="/js/codesite_product_dictionary_ph.pack.04102009.js"></script>
 </div>
<div id="footer" dir="ltr">
 
 <div class="text">
 
 &copy;2010 Google -
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 
 </div>
</div>

 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>
 
 


 
 </body>
</html>

