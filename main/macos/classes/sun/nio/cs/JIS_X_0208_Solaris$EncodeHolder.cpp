#include <sun/nio/cs/JIS_X_0208_Solaris$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/JIS_X_0208_Solaris$DecodeHolder.h>
#include <sun/nio/cs/JIS_X_0208_Solaris.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208_Solaris$DecodeHolder = ::sun::nio::cs::JIS_X_0208_Solaris$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _JIS_X_0208_Solaris$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_Solaris$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_Solaris$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _JIS_X_0208_Solaris$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(JIS_X_0208_Solaris$EncodeHolder, init$, void)},
	{}
};

$InnerClassInfo _JIS_X_0208_Solaris$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.JIS_X_0208_Solaris$EncodeHolder", "sun.nio.cs.JIS_X_0208_Solaris", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _JIS_X_0208_Solaris$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.JIS_X_0208_Solaris$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_JIS_X_0208_Solaris$EncodeHolder_FieldInfo_,
	_JIS_X_0208_Solaris$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0208_Solaris$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.JIS_X_0208_Solaris"
};

$Object* allocate$JIS_X_0208_Solaris$EncodeHolder($Class* clazz) {
	return $of($alloc(JIS_X_0208_Solaris$EncodeHolder));
}

$chars* JIS_X_0208_Solaris$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0208_Solaris$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0208_Solaris$EncodeHolder::init$() {
}

void clinit$JIS_X_0208_Solaris$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JIS_X_0208_Solaris$EncodeHolder::c2b, $new($chars, 20992));
	$assignStatic(JIS_X_0208_Solaris$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"礡纊礢褜礣鍈礤銈礥蓜礦俉礧炻礨昱礩棈礪鋹礫曻礬彅礭丨礮仡礯仼礰伀礱伃礲伹礳佖礴侒礵侊礶侚礷侔礸俍礹偀示倢礻俿礼倞礽偆社偰礿偂祀傔祁僴祂僘祃兊祄兤祅冝祆冾祇凬祈刕祉劜祊劦祋勀祌勛祍匀祎匇祏匤祐卲祑厓祒厲祓叝祔﨎祕咜祖咊祗咩祘哿祙喆祚坙祛坥祜垬祝埈神埇祟﨏祠塚祡增祢墲祣夋祤奓祥奛祦奝祧奣票妤祩妺祪孖祫寀祬甯祭寘祮寬祯尞祰岦祱岺祲峵祳崧祴嵓祵﨑祶嵂祷嵭祸嶸祹嶹祺巐祻弡祼弴祽彧祾德稡忞稢恝稣悅稤悊稥惞稦惕稧愠稨惲稩愑稪愷稫愰稬憘稭戓種抦稯揵稰摠稱撝稲擎稳敎稴昀稵昕稶昻稷昉稸昮稹昞稺昤稻晥稼晗稽晙稾晴稿晳穀暙穁暠穂暲穃暿穄曺穅朎穆朗穇杦穈枻穉桒穊柀穋栁穌桄積棏穎﨓穏楨穐﨔穑榘穒槢穓樰穔橫穕橆穖橳穗橾穘櫢穙櫤穚毖穛氿穜汜穝沆穞汯穟泚穠洄穡涇穢浯穣涖穤涬穥淏穦淸穧淲穨淼穩渹穪湜穫渧穬渼穭溿穮澈穯澵穰濵穱瀅穲瀇穳瀨穴炅穵炫究焏穷焄穸煜穹煆空煇穻凞穼燁穽燾穾犱笡犾笢猤笣猪笤獷笥玽符珉笧珖笨珣笩珒笪琇笫珵第琦笭琪笮琩笯琮笰瑢笱璉笲璟笳甁笴畯笵皂笶皜笷皞笸皛笹皦笺益笻睆笼劯笽砡笾硎笿硤筀硺筁礰筂礼筃神筄祥筅禔筆福筇禛筈竑等竧筊靖筋竫筌箞筍精筎絈筏絜筐綷筑綠筒緖筓繒答罇筕羡策羽筗茁筘荢筙荿筚菇筛菶筜葈筝蒴筞蕓筟蕙筠蕫筡﨟筢薰筣蘒筤﨡筥蠇筦裵筧訒筨訷筩詹筪誧筫誾筬諟筭諸筮諶筯譓筰譿筱賰筲賴筳贒筴赶筵﨣筶軏筷﨤筸逸筹遧筺郞筻都筼鄕筽鄧签釚簡釗簢釞簣釭簤釮簥釤簦釥簧鈆簨鈐簩鈊簪鈺簫鉀簬鈼簭鉎簮鉙簯鉑簰鈹簱鉧簲銧簳鉷簴鉸簵鋧簶鋗簷鋙簸鋐簹﨧簺鋕簻鋠簼鋓簽錥簾錡簿鋻籀﨨籁錞籂鋿籃錝籄錂籅鍰籆鍗籇鎤籈鏆籉鏞籊鏸籋鐱籌鑅籍鑈籎閒籏隆籐﨩籑隝籒隯籓霳籔霻籕靃籖靍籗靏籘靑籙靕籚顗籛顥籜飯籝飼籞餧籟館籠馞籡驎籢髙籣髜籤魵籥魲籦鮏籧鮱籨鮻籩鰀籪鵰籫鵫籬鶴籭鸙籮黑籱ⅰ籲ⅱ米ⅲ籴ⅳ籵ⅴ籶ⅵ籷ⅶ籸ⅷ籹ⅸ籺ⅹ类げ籼¦籽＇籾＂錫Ⅰ錬Ⅱ錭Ⅲ錮Ⅳ錯Ⅴ錰Ⅵ錱Ⅶ録Ⅷ錳Ⅸ錴Ⅹ錹㈱錺№錻℡"_s);
		$var($String, c2bNR, nullptr);
		$init($JIS_X_0208_Solaris$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0208_Solaris$DecodeHolder::b2cStr, $JIS_X_0208_Solaris$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0208_Solaris$EncodeHolder::c2b, JIS_X_0208_Solaris$EncodeHolder::c2bIndex);
	}
}

JIS_X_0208_Solaris$EncodeHolder::JIS_X_0208_Solaris$EncodeHolder() {
}

$Class* JIS_X_0208_Solaris$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0208_Solaris$EncodeHolder, name, initialize, &_JIS_X_0208_Solaris$EncodeHolder_ClassInfo_, clinit$JIS_X_0208_Solaris$EncodeHolder, allocate$JIS_X_0208_Solaris$EncodeHolder);
	return class$;
}

$Class* JIS_X_0208_Solaris$EncodeHolder::class$ = nullptr;

		} // cs
	} // nio
} // sun