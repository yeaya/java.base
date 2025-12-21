#include <sun/nio/cs/MS932$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS932$DecodeHolder.h>
#include <sun/nio/cs/MS932.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS932$DecodeHolder = ::sun::nio::cs::MS932$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _MS932$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(MS932$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(MS932$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _MS932$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MS932$EncodeHolder::*)()>(&MS932$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _MS932$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.MS932$EncodeHolder", "sun.nio.cs.MS932", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _MS932$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.MS932$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_MS932$EncodeHolder_FieldInfo_,
	_MS932$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_MS932$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.MS932"
};

$Object* allocate$MS932$EncodeHolder($Class* clazz) {
	return $of($alloc(MS932$EncodeHolder));
}

$chars* MS932$EncodeHolder::c2b = nullptr;
$chars* MS932$EncodeHolder::c2bIndex = nullptr;

void MS932$EncodeHolder::init$() {
}

void clinit$MS932$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS932$EncodeHolder::c2b, $new($chars, 27392));
	$assignStatic(MS932$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"螐≒螑≡螒∫螕√螖⊥螗∠螚∵螛∩螜∪\ued40纊\ued41褜\ued42鍈\ued43銈\ued44蓜\ued45俉\ued46炻\ued47昱\ued48棈\ued49鋹\ued4a曻\ued4b彅\ued4c丨\ued4d仡\ued4e仼\ued4f伀\ued50伃\ued51伹\ued52佖\ued53侒\ued54侊\ued55侚\ued56侔\ued57俍\ued58偀\ued59倢\ued5a俿\ued5b倞\ued5c偆\ued5d偰\ued5e偂\ued5f傔\ued60僴\ued61僘\ued62兊\ued63兤\ued64冝\ued65冾\ued66凬\ued67刕\ued68劜\ued69劦\ued6a勀\ued6b勛\ued6c匀\ued6d匇\ued6e匤\ued6f卲\ued70厓\ued71厲\ued72叝\ued73﨎\ued74咜\ued75咊\ued76咩\ued77哿\ued78喆\ued79坙\ued7a坥\ued7b垬\ued7c埈\ued7d埇\ued7e﨏\ued80塚\ued81增\ued82墲\ued83夋\ued84奓\ued85奛\ued86奝\ued87奣\ued88妤\ued89妺\ued8a孖\ued8b寀\ued8c甯\ued8d寘\ued8e寬\ued8f尞\ued90岦\ued91岺\ued92峵\ued93崧\ued94嵓\ued95﨑\ued96嵂\ued97嵭\ued98嶸\ued99嶹\ued9a巐\ued9b弡\ued9c弴\ued9d彧\ued9e德\ued9f忞\ueda0恝\ueda1悅\ueda2悊\ueda3惞\ueda4惕\ueda5愠\ueda6惲\ueda7愑\ueda8愷\ueda9愰\uedaa憘\uedab戓\uedac抦\uedad揵\uedae摠\uedaf撝\uedb0擎\uedb1敎\uedb2昀\uedb3昕\uedb4昻\uedb5昉\uedb6昮\uedb7昞\uedb8昤\uedb9晥\uedba晗\uedbb晙\uedbc晴\uedbd晳\uedbe暙\uedbf暠\uedc0暲\uedc1暿\uedc2曺\uedc3朎\uedc4朗\uedc5杦\uedc6枻\uedc7桒\uedc8柀\uedc9栁\uedca桄\uedcb棏\uedcc﨓\uedcd楨\uedce﨔\uedcf榘\uedd0槢\uedd1樰\uedd2橫\uedd3橆\uedd4橳\uedd5橾\uedd6櫢\uedd7櫤\uedd8毖\uedd9氿\uedda汜\ueddb沆\ueddc汯\ueddd泚\uedde洄\ueddf涇\uede0浯\uede1涖\uede2涬\uede3淏\uede4淸\uede5淲\uede6淼\uede7渹\uede8湜\uede9渧\uedea渼\uedeb溿\uedec澈\ueded澵\uedee濵\uedef瀅\uedf0瀇\uedf1瀨\uedf2炅\uedf3炫\uedf4焏\uedf5焄\uedf6煜\uedf7煆\uedf8煇\uedf9凞\uedfa燁\uedfb燾\uedfc犱\uee40犾\uee41猤\uee42猪\uee43獷\uee44玽\uee45珉\uee46珖\uee47珣\uee48珒\uee49琇\uee4a珵\uee4b琦\uee4c琪\uee4d琩\uee4e琮\uee4f瑢\uee50璉\uee51璟\uee52甁\uee53畯\uee54皂\uee55皜\uee56皞\uee57皛\uee58皦\uee59益\uee5a睆\uee5b劯\uee5c砡\uee5d硎\uee5e硤\uee5f硺\uee60礰\uee61礼\uee62神\uee63祥\uee64禔\uee65福\uee66禛\uee67竑\uee68竧\uee69靖\uee6a竫\uee6b箞\uee6c精\uee6d絈\uee6e絜\uee6f綷\uee70綠\uee71緖\uee72繒\uee73罇\uee74羡\uee75羽\uee76茁\uee77荢\uee78荿\uee79菇\uee7a菶\uee7b葈\uee7c蒴\uee7d蕓\uee7e蕙\uee80蕫\uee81﨟\uee82薰\uee83蘒\uee84﨡\uee85蠇\uee86裵\uee87訒\uee88訷\uee89詹\uee8a誧\uee8b誾\uee8c諟\uee8d諸\uee8e諶\uee8f譓\uee90譿\uee91賰\uee92賴\uee93贒\uee94赶\uee95﨣\uee96軏\uee97﨤\uee98逸\uee99遧\uee9a郞\uee9b都\uee9c鄕\uee9d鄧\uee9e釚\uee9f釗\ueea0釞\ueea1釭\ueea2釮\ueea3釤\ueea4釥\ueea5鈆\ueea6鈐\ueea7鈊\ueea8鈺\ueea9鉀\ueeaa鈼\ueeab鉎\ueeac鉙\ueead鉑\ueeae鈹\ueeaf鉧\ueeb0銧\ueeb1鉷\ueeb2鉸\ueeb3鋧\ueeb4鋗\ueeb5鋙\ueeb6鋐\ueeb7﨧\ueeb8鋕\ueeb9鋠\ueeba鋓\ueebb錥\ueebc錡\ueebd鋻\ueebe﨨\ueebf錞\ueec0鋿\ueec1錝\ueec2錂\ueec3鍰\ueec4鍗\ueec5鎤\ueec6鏆\ueec7鏞\ueec8鏸\ueec9鐱\ueeca鑅\ueecb鑈\ueecc閒\ueecd隆\ueece﨩\ueecf隝\ueed0隯\ueed1霳\ueed2霻\ueed3靃\ueed4靍\ueed5靏\ueed6靑\ueed7靕\ueed8顗\ueed9顥\ueeda飯\ueedb飼\ueedc餧\ueedd館\ueede馞\ueedf驎\ueee0髙\ueee1髜\ueee2魵\ueee3魲\ueee4鮏\ueee5鮱\ueee6鮻\ueee7鰀\ueee8鵰\ueee9鵫\ueeea鶴\ueeeb鸙\ueeec黑\ueeefⅰ\ueef0ⅱ\ueef1ⅲ\ueef2ⅳ\ueef3ⅴ\ueef4ⅵ\ueef5ⅶ\ueef6ⅷ\ueef7ⅸ\ueef8ⅹ\ueef9￢\ueefa￤\ueefb＇\ueefc＂琢Ⅰ碑Ⅱ社Ⅲ祉Ⅳ祈Ⅴ祐Ⅵ祖Ⅶ祝Ⅷ禍Ⅸ禎Ⅹ穀￢縉㈱繁№署℡者∵"_s);
		$var($String, c2bNR, u"~‾\\¥腃¸腅·腐¯膑¢膒£臊¬臡«臢»莔ゔ菊µ"_s);
		$init($MS932$DecodeHolder);
		$DoubleByte$Encoder::initC2B($MS932$DecodeHolder::b2cStr, $MS932$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 252, MS932$EncodeHolder::c2b, MS932$EncodeHolder::c2bIndex);
	}
}

MS932$EncodeHolder::MS932$EncodeHolder() {
}

$Class* MS932$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(MS932$EncodeHolder, name, initialize, &_MS932$EncodeHolder_ClassInfo_, clinit$MS932$EncodeHolder, allocate$MS932$EncodeHolder);
	return class$;
}

$Class* MS932$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun