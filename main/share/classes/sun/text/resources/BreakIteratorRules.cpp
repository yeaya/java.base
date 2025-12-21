#include <sun/text/resources/BreakIteratorRules.h>

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
			$of(u"<ignore>=[:Cf:];<enclosing>=[:Mn::Me:];<danda>=[।॥];<kanji>=[々一-龥豈-鶴];<kata>=[ァ-ヺヽヾ];<hira>=[ぁ-ゔゝゞ];<cjk-diacrit>=[゙-゜・ー];<letter-base>=[:L::Mc:^[<kanji><kata><hira><cjk-diacrit>]];<let>=(<letter-base><enclosing>*);<digit-base>=[:N:];<dgt>=(<digit-base><enclosing>*);<mid-word>=[:Pd::Pc:\u00ad‧\\\"\\\'\\.];<mid-num>=[\\\"\\\'\\,٫\\.];<pre-num>=[:Sc:\\#\\.^¢];<post-num>=[\\%\\&¢٪‰‱];<ls>=[\n\f  ];<ws-base>=[:Zs:\t];<ws>=(<ws-base><enclosing>*);<word>=((<let><let>*(<mid-word><let><let>*)*){<danda>});<number>=(<dgt><dgt>*(<mid-num><dgt><dgt>*)*);.;{<word>}(<number><word>)*{<number>{<post-num>}};<pre-num>(<number><word>)*{<number>{<post-num>}};<ws>*{\r}{<ls>};[<kata><cjk-diacrit>]*;[<hira><cjk-diacrit>]*;<kanji>*;<base>=[^<enclosing>^[:Cc::Cf::Zl::Zp:]];<base><enclosing><enclosing>*;"_s)
		}),
		$$new($ObjectArray, {
			$of("LineBreakRules"_s),
			$of(u"<break>=[\u0003\t\n\f  ];<ignore>=[:Cf:[:Cc:^[<break>\r]]];<enclosing>=[:Mn::Me:];<danda>=[।॥];<glue>=[ ༌ ‑ \ufeff];<space>=[:Zs::Cc:^[<glue><break>\r]];<dash>=[:Pd:\u00ad^<glue>];<pre-word>=[:Sc::Ps::Pi:^[¢]\\\"\\\'];<post-word>=[\\\":Pe::Pf:\\!\\%\\.\\,\\:\\;\\?¢°٪‰-‴℃℅℉、。々ぁぃぅぇぉっゃゅょゎ゙-ゞァィゥェォッャュョヮヵヶー-ヾ！％，．：；？];<kanji>=[一-龥가-힣豈-鶴侮-頻ぁ-ゔァ-ヺ^[<post-word><ignore>]];<digit>=[:Nd::No:];<mid-num>=[\\.\\,];<char>=[^[<break><space><dash><kanji><glue><ignore><pre-word><post-word><mid-num>\r<danda>]];<number>=([<pre-word><dash>]*<digit><digit>*(<mid-num><digit><digit>*)*);<word-core>=(<char>*|<kanji>|<number>);<word-suffix>=((<dash><dash>*|<post-word>*));<word>=(<pre-word>*<word-core><word-suffix>);<hack1>=[\\(];<hack2>=[\\)];<hack3>=[\\$\\\'];<word>(((<space>*<glue><glue>*{<space>})|<hack3>)<word>)*<space>*{<enclosing>*}{<hack1><hack2><post-word>*}{<enclosing>*}{\r}{<break>};\r<break>;"_s)
		}),
		$$new($ObjectArray, {
			$of("SentenceBreakRules"_s),
			$of(u"<ignore>=[:Mn::Me::Cf:];<letter>=[:L:];<lc>=[:Ll:];<uc>=[:Lu:];<notlc>=[<letter>^<lc>];<space>=[\t\r\f\n :Zs:];<start-punctuation>=[:Ps::Pi:\\\"\\\'];<end>=[:Pe::Pf:\\\"\\\'];<digit>=[:N:];<term>=[\\!\\?。！？];<period>=[\\.．];<comma>=[\\,];<sent-start>=[^[:L:<space><start-punctuation><end><digit><term><period><comma> <ignore>]];<danda>=[।॥];.*?{ };.*?<danda><space>*;.*?<period>[<period><end>]*<space><space>*/<notlc>;.*?<period>[<period><end>]*<space>*/[<start-punctuation><sent-start>][<start-punctuation><sent-start>]*<letter>;.*?<term>[<term><period><end>]*<space>*{ };!<sent-start><start-punctuation>*<space>*<end>*<period>;![<sent-start><lc><digit>]<start-punctuation>*<space>*<end>*<term>;"_s)
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