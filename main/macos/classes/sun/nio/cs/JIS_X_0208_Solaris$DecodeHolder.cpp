#include <sun/nio/cs/JIS_X_0208_Solaris$DecodeHolder.h>

#include <sun/nio/cs/DoubleByte.h>
#include <sun/nio/cs/JIS_X_0208_Solaris.h>
#include <jcpp.h>

#undef B2C_UNMAPPABLE

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte = ::sun::nio::cs::DoubleByte;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _JIS_X_0208_Solaris$DecodeHolder_FieldInfo_[] = {
	{"b2cSBStr", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_Solaris$DecodeHolder, b2cSBStr)},
	{"b2cStr", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_Solaris$DecodeHolder, b2cStr)},
	{"b2c", "[[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_Solaris$DecodeHolder, b2c)},
	{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_Solaris$DecodeHolder, b2cSB)},
	{}
};

$MethodInfo _JIS_X_0208_Solaris$DecodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JIS_X_0208_Solaris$DecodeHolder::*)()>(&JIS_X_0208_Solaris$DecodeHolder::init$))},
	{}
};

$InnerClassInfo _JIS_X_0208_Solaris$DecodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.JIS_X_0208_Solaris$DecodeHolder", "sun.nio.cs.JIS_X_0208_Solaris", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _JIS_X_0208_Solaris$DecodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.JIS_X_0208_Solaris$DecodeHolder",
	"java.lang.Object",
	nullptr,
	_JIS_X_0208_Solaris$DecodeHolder_FieldInfo_,
	_JIS_X_0208_Solaris$DecodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0208_Solaris$DecodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.JIS_X_0208_Solaris"
};

$Object* allocate$JIS_X_0208_Solaris$DecodeHolder($Class* clazz) {
	return $of($alloc(JIS_X_0208_Solaris$DecodeHolder));
}

$String* JIS_X_0208_Solaris$DecodeHolder::b2cSBStr = nullptr;
$StringArray* JIS_X_0208_Solaris$DecodeHolder::b2cStr = nullptr;
$charArray2* JIS_X_0208_Solaris$DecodeHolder::b2c = nullptr;
$chars* JIS_X_0208_Solaris$DecodeHolder::b2cSB = nullptr;

void JIS_X_0208_Solaris$DecodeHolder::init$() {
}

void clinit$JIS_X_0208_Solaris$DecodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JIS_X_0208_Solaris$DecodeHolder::b2cSBStr, u"����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������"_s);
	$assignStatic(JIS_X_0208_Solaris$DecodeHolder::b2cStr, $new($StringArray, {
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		u"��������？�������������������������������������������������������������������������������������"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		u"①②③④⑤⑥⑦⑧⑨⑩⑪⑫⑬⑭⑮⑯⑰⑱⑲⑳ⅠⅡⅢⅣⅤⅥⅦⅧⅨⅩ�㍉㌔㌢㍍㌘㌧㌃㌶㍑㍗㌍㌦㌣㌫㍊㌻㎜㎝㎞㎎㎏㏄㎡��������㍻\u301d〟№㏍℡㊤㊥㊦㊧㊨㈱㈲㈹㍾㍽㍼≒≡∫∮∑√⊥∠∟⊿∵∩∪��"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		u"纊褜鍈銈蓜俉炻昱棈鋹曻彅丨仡仼伀伃伹佖侒侊侚侔俍偀倢俿倞偆偰偂傔僴僘兊兤冝冾凬刕劜劦勀勛匀匇匤卲厓厲叝﨎咜咊咩哿喆坙坥垬埈埇﨏塚增墲夋奓奛奝奣妤妺孖寀甯寘寬尞岦岺峵崧嵓﨑嵂嵭嶸嶹巐弡弴彧德"_s,
		u"忞恝悅悊惞惕愠惲愑愷愰憘戓抦揵摠撝擎敎昀昕昻昉昮昞昤晥晗晙晴晳暙暠暲暿曺朎朗杦枻桒柀栁桄棏﨓楨﨔榘槢樰橫橆橳橾櫢櫤毖氿汜沆汯泚洄涇浯涖涬淏淸淲淼渹湜渧渼溿澈澵濵瀅瀇瀨炅炫焏焄煜煆煇凞燁燾犱"_s,
		u"犾猤猪獷玽珉珖珣珒琇珵琦琪琩琮瑢璉璟甁畯皂皜皞皛皦益睆劯砡硎硤硺礰礼神祥禔福禛竑竧靖竫箞精絈絜綷綠緖繒罇羡羽茁荢荿菇菶葈蒴蕓蕙蕫﨟薰蘒﨡蠇裵訒訷詹誧誾諟諸諶譓譿賰賴贒赶﨣軏﨤逸遧郞都鄕鄧釚"_s,
		u"釗釞釭釮釤釥鈆鈐鈊鈺鉀鈼鉎鉙鉑鈹鉧銧鉷鉸鋧鋗鋙鋐﨧鋕鋠鋓錥錡鋻﨨錞鋿錝錂鍰鍗鎤鏆鏞鏸鐱鑅鑈閒隆﨩隝隯霳霻靃靍靏靑靕顗顥飯飼餧館馞驎髙髜魵魲鮏鮱鮻鰀鵰鵫鶴鸙黑��ⅰⅱⅲⅳⅴⅵⅶⅷⅸⅹげ¦＇＂"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		u"ⅰⅱⅲⅳⅴⅵⅶⅷⅸⅹⅠⅡⅢⅣⅤⅥⅦⅧⅨⅩげ¦＇＂㈱№℡の纊褜鍈銈蓜俉炻昱棈鋹曻彅丨仡仼伀伃伹佖侒侊侚侔俍偀倢俿倞偆偰偂傔僴僘兊兤冝冾凬刕劜劦勀勛匀匇匤卲厓厲叝﨎咜咊咩哿喆坙坥垬埈埇﨏塚增墲"_s,
		u"夋奓奛奝奣妤妺孖寀甯寘寬尞岦岺峵崧嵓﨑嵂嵭嶸嶹巐弡弴彧德忞恝悅悊惞惕愠惲愑愷愰憘戓抦揵摠撝擎敎昀昕昻昉昮昞昤晥晗晙晴晳暙暠暲暿曺朎朗杦枻桒柀栁桄棏﨓楨﨔榘槢樰橫橆橳橾櫢櫤毖氿汜沆汯泚洄涇浯"_s,
		u"涖涬淏淸淲淼渹湜渧渼溿澈澵濵瀅瀇瀨炅炫焏焄煜煆煇凞燁燾犱犾猤猪獷玽珉珖珣珒琇珵琦琪琩琮瑢璉璟甁畯皂皜皞皛皦益睆劯砡硎硤硺礰礼神祥禔福禛竑竧靖竫箞精絈絜綷綠緖繒罇羡羽茁荢荿菇菶葈蒴蕓蕙蕫﨟薰"_s,
		u"蘒﨡蠇裵訒訷詹誧誾諟諸諶譓譿賰賴贒赶﨣軏﨤逸遧郞都鄕鄧釚釗釞釭釮釤釥鈆鈐鈊鈺鉀鈼鉎鉙鉑鈹鉧銧鉷鉸鋧鋗鋙鋐﨧鋕鋠鋓錥錡鋻﨨錞鋿錝錂鍰鍗鎤鏆鏞鏸鐱鑅鑈閒隆﨩隝隯霳霻靃靍靏靑靕顗顥飯飼餧館馞驎髙"_s,
		u"髜魵魲鮏鮱鮻鰀鵰鵫鶴鸙黑����������������������������������������������������������������������������������"_s,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr,
		($String*)nullptr
	}));
	$assignStatic(JIS_X_0208_Solaris$DecodeHolder::b2c, $new($charArray2, $nc(JIS_X_0208_Solaris$DecodeHolder::b2cStr)->length));
	{
		for (int32_t i = 0; i < $nc(JIS_X_0208_Solaris$DecodeHolder::b2cStr)->length; ++i) {
			if ($nc(JIS_X_0208_Solaris$DecodeHolder::b2cStr)->get(i) == nullptr) {
				$init($DoubleByte);
				$nc(JIS_X_0208_Solaris$DecodeHolder::b2c)->set(i, $DoubleByte::B2C_UNMAPPABLE);
			} else {
				$nc(JIS_X_0208_Solaris$DecodeHolder::b2c)->set(i, $($nc($nc(JIS_X_0208_Solaris$DecodeHolder::b2cStr)->get(i))->toCharArray()));
			}
		}
		$assignStatic(JIS_X_0208_Solaris$DecodeHolder::b2cSB, $nc(JIS_X_0208_Solaris$DecodeHolder::b2cSBStr)->toCharArray());
	}
}

JIS_X_0208_Solaris$DecodeHolder::JIS_X_0208_Solaris$DecodeHolder() {
}

$Class* JIS_X_0208_Solaris$DecodeHolder::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0208_Solaris$DecodeHolder, name, initialize, &_JIS_X_0208_Solaris$DecodeHolder_ClassInfo_, clinit$JIS_X_0208_Solaris$DecodeHolder, allocate$JIS_X_0208_Solaris$DecodeHolder);
	return class$;
}

$Class* JIS_X_0208_Solaris$DecodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun