#include <sun/text/resources/BreakIteratorRules.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {

$MethodInfo _BreakIteratorRules_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BreakIteratorRules::*)()>(&BreakIteratorRules::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _BreakIteratorRules_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.BreakIteratorRules",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_BreakIteratorRules_MethodInfo_
};

$Object* allocate$BreakIteratorRules($Class* clazz) {
	return $of($alloc(BreakIteratorRules));
}

void BreakIteratorRules::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* BreakIteratorRules::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CharacterBreakRules"_s),
			$of($cstr({'<', 'e', 'n', 'c', 'l', 'o', 's', 'i', 'n', 'g', '>', '=', '[', ':', 'M', 'n', ':', ':', 'M', 'e', ':', ']', ';', '<', 'c', 'h', 'o', 's', 'e', 'o', 'n', 'g', '>', '=', '[', 0x1100, '-', 0x115F, ']', ';', '<', 'j', 'u', 'n', 'g', 's', 'e', 'o', 'n', 'g', '>', '=', '[', 0x1160, '-', 0x11A7, ']', ';', '<', 'j', 'o', 'n', 'g', 's', 'e', 'o', 'n', 'g', '>', '=', '[', 0x11A8, '-', 0x11FF, ']', ';', '<', 's', 'u', 'r', 'r', '-', 'h', 'i', '>', '=', '[', 0xD800, '-', 0xDBFF, ']', ';', '<', 's', 'u', 'r', 'r', '-', 'l', 'o', '>', '=', '[', 0xDC00, '-', 0xDFFF, ']', ';', '.', ';', '<', 'b', 'a', 's', 'e', '>', '=', '[', '^', '<', 'e', 'n', 'c', 'l', 'o', 's', 'i', 'n', 'g', '>', '^', '[', ':', 'C', 'c', ':', ':', 'C', 'f', ':', ':', 'Z', 'l', ':', ':', 'Z', 'p', ':', ']', ']', ';', '<', 'b', 'a', 's', 'e', '>', '<', 'e', 'n', 'c', 'l', 'o', 's', 'i', 'n', 'g', '>', '<', 'e', 'n', 'c', 'l', 'o', 's', 'i', 'n', 'g', '>', '*', ';', '\r', '\n', ';', '<', 's', 'u', 'r', 'r', '-', 'h', 'i', '>', '<', 's', 'u', 'r', 'r', '-', 'l', 'o', '>', ';', '<', 'c', 'h', 'o', 's', 'e', 'o', 'n', 'g', '>', '*', '<', 'j', 'u', 'n', 'g', 's', 'e', 'o', 'n', 'g', '>', '*', '<', 'j', 'o', 'n', 'g', 's', 'e', 'o', 'n', 'g', '>', '*', ';', '<', 'n', 'u', 'k', 't', 'a', '>', '=', '[', 0x93C, ']', ';', '<', 'd', 'a', 'n', 'd', 'a', '>', '=', '[', 0x964, 0x965, ']', ';', '<', 'v', 'i', 'r', 'a', 'm', 'a', '>', '=', '[', 0x94D, ']', ';', '<', 'd', 'e', 'v', 'V', 'o', 'w', 'e', 'l', 'S', 'i', 'g', 'n', '>', '=', '[', 0x93E, '-', 0x94C, 0x962, 0x963, ']', ';', '<', 'd', 'e', 'v', 'C', 'o', 'n', 's', 'o', 'n', 'a', 'n', 't', '>', '=', '[', 0x915, '-', 0x939, ']', ';', '<', 'd', 'e', 'v', 'N', 'u', 'k', 't', 'a', 'C', 'o', 'n', 's', 'o', 'n', 'a', 'n', 't', '>', '=', '[', 0x958, '-', 0x95F, ']', ';', '<', 'd', 'e', 'v', 'C', 'h', 'a', 'r', 'E', 'n', 'd', '>', '=', '[', 0x902, 0x903, 0x951, '-', 0x954, ']', ';', '<', 'd', 'e', 'v', 'C', 'A', 'M', 'N', '>', '=', '(', '<', 'd', 'e', 'v', 'C', 'o', 'n', 's', 'o', 'n', 'a', 'n', 't', '>', '{', '<', 'n', 'u', 'k', 't', 'a', '>', '}', ')', ';', '<', 'd', 'e', 'v', 'C', 'o', 'n', 's', 'o', 'n', 'a', 'n', 't', '1', '>', '=', '(', '<', 'd', 'e', 'v', 'N', 'u', 'k', 't', 'a', 'C', 'o', 'n', 's', 'o', 'n', 'a', 'n', 't', '>', '|', '<', 'd', 'e', 'v', 'C', 'A', 'M', 'N', '>', ')', ';', '<', 'z', 'w', 'j', '>', '=', '[', 0x200D, ']', ';', '<', 'd', 'e', 'v', 'C', 'o', 'n', 'j', 'u', 'n', 'c', 't', '>', '=', '(', '{', '<', 'd', 'e', 'v', 'C', 'o', 'n', 's', 'o', 'n', 'a', 'n', 't', '1', '>', '<', 'v', 'i', 'r', 'a', 'm', 'a', '>', '{', '<', 'z', 'w', 'j', '>', '}', '}', '<', 'd', 'e', 'v', 'C', 'o', 'n', 's', 'o', 'n', 'a', 'n', 't', '1', '>', ')', ';', '<', 'd', 'e', 'v', 'C', 'o', 'n', 'j', 'u', 'n', 'c', 't', '>', '{', '<', 'd', 'e', 'v', 'V', 'o', 'w', 'e', 'l', 'S', 'i', 'g', 'n', '>', '}', '{', '<', 'd', 'e', 'v', 'C', 'h', 'a', 'r', 'E', 'n', 'd', '>', '}', ';', '<', 'd', 'a', 'n', 'd', 'a', '>', '<', 'n', 'u', 'k', 't', 'a', '>', ';'}))
		}),
		$$new($ObjectArray, {
			$of("WordBreakRules"_s),
			$of(u"<ignore>=[:Cf:];<enclosing>=[:Mn::Me:];<danda>=[\u0964\u0965];<kanji>=[\u3005\u4e00-\u9fa5\uf900-\ufa2d];<kata>=[\u30a1-\u30fa\u30fd\u30fe];<hira>=[\u3041-\u3094\u309d\u309e];<cjk-diacrit>=[\u3099-\u309c\u30fb\u30fc];<letter-base>=[:L::Mc:^[<kanji><kata><hira><cjk-diacrit>]];<let>=(<letter-base><enclosing>*);<digit-base>=[:N:];<dgt>=(<digit-base><enclosing>*);<mid-word>=[:Pd::Pc:\u00ad\u2027\\\"\\\'\\.];<mid-num>=[\\\"\\\'\\,\u066b\\.];<pre-num>=[:Sc:\\#\\.^\u00a2];<post-num>=[\\%\\&\u00a2\u066a\u2030\u2031];<ls>=[\n\f\u2028\u2029];<ws-base>=[:Zs:\t];<ws>=(<ws-base><enclosing>*);<word>=((<let><let>*(<mid-word><let><let>*)*){<danda>});<number>=(<dgt><dgt>*(<mid-num><dgt><dgt>*)*);.;{<word>}(<number><word>)*{<number>{<post-num>}};<pre-num>(<number><word>)*{<number>{<post-num>}};<ws>*{\r}{<ls>};[<kata><cjk-diacrit>]*;[<hira><cjk-diacrit>]*;<kanji>*;<base>=[^<enclosing>^[:Cc::Cf::Zl::Zp:]];<base><enclosing><enclosing>*;"_s)
		}),
		$$new($ObjectArray, {
			$of("LineBreakRules"_s),
			$of(u"<break>=[\u0003\t\n\f\u2028\u2029];<ignore>=[:Cf:[:Cc:^[<break>\r]]];<enclosing>=[:Mn::Me:];<danda>=[\u0964\u0965];<glue>=[\u00a0\u0f0c\u2007\u2011\u202f\ufeff];<space>=[:Zs::Cc:^[<glue><break>\r]];<dash>=[:Pd:\u00ad^<glue>];<pre-word>=[:Sc::Ps::Pi:^[\u00a2]\\\"\\\'];<post-word>=[\\\":Pe::Pf:\\!\\%\\.\\,\\:\\;\\?\u00a2\u00b0\u066a\u2030-\u2034\u2103\u2105\u2109\u3001\u3002\u3005\u3041\u3043\u3045\u3047\u3049\u3063\u3083\u3085\u3087\u308e\u3099-\u309e\u30a1\u30a3\u30a5\u30a7\u30a9\u30c3\u30e3\u30e5\u30e7\u30ee\u30f5\u30f6\u30fc-\u30fe\uff01\uff05\uff0c\uff0e\uff1a\uff1b\uff1f];<kanji>=[\u4e00-\u9fa5\uac00-\ud7a3\uf900-\ufa2d\ufa30-\ufa6a\u3041-\u3094\u30a1-\u30fa^[<post-word><ignore>]];<digit>=[:Nd::No:];<mid-num>=[\\.\\,];<char>=[^[<break><space><dash><kanji><glue><ignore><pre-word><post-word><mid-num>\r<danda>]];<number>=([<pre-word><dash>]*<digit><digit>*(<mid-num><digit><digit>*)*);<word-core>=(<char>*|<kanji>|<number>);<word-suffix>=((<dash><dash>*|<post-word>*));<word>=(<pre-word>*<word-core><word-suffix>);<hack1>=[\\(];<hack2>=[\\)];<hack3>=[\\$\\\'];<word>(((<space>*<glue><glue>*{<space>})|<hack3>)<word>)*<space>*{<enclosing>*}{<hack1><hack2><post-word>*}{<enclosing>*}{\r}{<break>};\r<break>;"_s)
		}),
		$$new($ObjectArray, {
			$of("SentenceBreakRules"_s),
			$of(u"<ignore>=[:Mn::Me::Cf:];<letter>=[:L:];<lc>=[:Ll:];<uc>=[:Lu:];<notlc>=[<letter>^<lc>];<space>=[\t\r\f\n\u2028:Zs:];<start-punctuation>=[:Ps::Pi:\\\"\\\'];<end>=[:Pe::Pf:\\\"\\\'];<digit>=[:N:];<term>=[\\!\\?\u3002\uff01\uff1f];<period>=[\\.\uff0e];<comma>=[\\,];<sent-start>=[^[:L:<space><start-punctuation><end><digit><term><period><comma>\u2029<ignore>]];<danda>=[\u0964\u0965];.*?{\u2029};.*?<danda><space>*;.*?<period>[<period><end>]*<space><space>*/<notlc>;.*?<period>[<period><end>]*<space>*/[<start-punctuation><sent-start>][<start-punctuation><sent-start>]*<letter>;.*?<term>[<term><period><end>]*<space>*{\u2029};!<sent-start><start-punctuation>*<space>*<end>*<period>;![<sent-start><lc><digit>]<start-punctuation>*<space>*<end>*<term>;"_s)
		})
	});
}

BreakIteratorRules::BreakIteratorRules() {
}

$Class* BreakIteratorRules::load$($String* name, bool initialize) {
	$loadClass(BreakIteratorRules, name, initialize, &_BreakIteratorRules_ClassInfo_, allocate$BreakIteratorRules);
	return class$;
}

$Class* BreakIteratorRules::class$ = nullptr;

		} // resources
	} // text
} // sun