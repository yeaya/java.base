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
	$assignStatic(JIS_X_0208_Solaris$DecodeHolder::b2cSBStr, u"\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd"_s);
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
		u"\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\uff1f\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd"_s,
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
		u"\u2460\u2461\u2462\u2463\u2464\u2465\u2466\u2467\u2468\u2469\u246a\u246b\u246c\u246d\u246e\u246f\u2470\u2471\u2472\u2473\u2160\u2161\u2162\u2163\u2164\u2165\u2166\u2167\u2168\u2169\ufffd\u3349\u3314\u3322\u334d\u3318\u3327\u3303\u3336\u3351\u3357\u330d\u3326\u3323\u332b\u334a\u333b\u339c\u339d\u339e\u338e\u338f\u33c4\u33a1\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\u337b\u301d\u301f\u2116\u33cd\u2121\u32a4\u32a5\u32a6\u32a7\u32a8\u3231\u3232\u3239\u337e\u337d\u337c\u2252\u2261\u222b\u222e\u2211\u221a\u22a5\u2220\u221f\u22bf\u2235\u2229\u222a\ufffd\ufffd"_s,
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
		u"\u7e8a\u891c\u9348\u9288\u84dc\u4fc9\u70bb\u6631\u68c8\u92f9\u66fb\u5f45\u4e28\u4ee1\u4efc\u4f00\u4f03\u4f39\u4f56\u4f92\u4f8a\u4f9a\u4f94\u4fcd\u5040\u5022\u4fff\u501e\u5046\u5070\u5042\u5094\u50f4\u50d8\u514a\u5164\u519d\u51be\u51ec\u5215\u529c\u52a6\u52c0\u52db\u5300\u5307\u5324\u5372\u5393\u53b2\u53dd\ufa0e\u549c\u548a\u54a9\u54ff\u5586\u5759\u5765\u57ac\u57c8\u57c7\ufa0f\ufa10\u589e\u58b2\u590b\u5953\u595b\u595d\u5963\u59a4\u59ba\u5b56\u5bc0\u752f\u5bd8\u5bec\u5c1e\u5ca6\u5cba\u5cf5\u5d27\u5d53\ufa11\u5d42\u5d6d\u5db8\u5db9\u5dd0\u5f21\u5f34\u5f67\u5fb7"_s,
		u"\u5fde\u605d\u6085\u608a\u60de\u60d5\u6120\u60f2\u6111\u6137\u6130\u6198\u6213\u62a6\u63f5\u6460\u649d\u64ce\u654e\u6600\u6615\u663b\u6609\u662e\u661e\u6624\u6665\u6657\u6659\ufa12\u6673\u6699\u66a0\u66b2\u66bf\u66fa\u670e\uf929\u6766\u67bb\u6852\u67c0\u6801\u6844\u68cf\ufa13\u6968\ufa14\u6998\u69e2\u6a30\u6a6b\u6a46\u6a73\u6a7e\u6ae2\u6ae4\u6bd6\u6c3f\u6c5c\u6c86\u6c6f\u6cda\u6d04\u6d87\u6d6f\u6d96\u6dac\u6dcf\u6df8\u6df2\u6dfc\u6e39\u6e5c\u6e27\u6e3c\u6ebf\u6f88\u6fb5\u6ff5\u7005\u7007\u7028\u7085\u70ab\u710f\u7104\u715c\u7146\u7147\ufa15\u71c1\u71fe\u72b1"_s,
		u"\u72be\u7324\ufa16\u7377\u73bd\u73c9\u73d6\u73e3\u73d2\u7407\u73f5\u7426\u742a\u7429\u742e\u7462\u7489\u749f\u7501\u756f\u7682\u769c\u769e\u769b\u76a6\ufa17\u7746\u52af\u7821\u784e\u7864\u787a\u7930\ufa18\ufa19\ufa1a\u7994\ufa1b\u799b\u7ad1\u7ae7\ufa1c\u7aeb\u7b9e\ufa1d\u7d48\u7d5c\u7db7\u7da0\u7dd6\u7e52\u7f47\u7fa1\ufa1e\u8301\u8362\u837f\u83c7\u83f6\u8448\u84b4\u8553\u8559\u856b\ufa1f\u85b0\ufa20\ufa21\u8807\u88f5\u8a12\u8a37\u8a79\u8aa7\u8abe\u8adf\ufa22\u8af6\u8b53\u8b7f\u8cf0\u8cf4\u8d12\u8d76\ufa23\u8ecf\ufa24\ufa25\u9067\u90de\ufa26\u9115\u9127\u91da"_s,
		u"\u91d7\u91de\u91ed\u91ee\u91e4\u91e5\u9206\u9210\u920a\u923a\u9240\u923c\u924e\u9259\u9251\u9239\u9267\u92a7\u9277\u9278\u92e7\u92d7\u92d9\u92d0\ufa27\u92d5\u92e0\u92d3\u9325\u9321\u92fb\ufa28\u931e\u92ff\u931d\u9302\u9370\u9357\u93a4\u93c6\u93de\u93f8\u9431\u9445\u9448\u9592\uf9dc\ufa29\u969d\u96af\u9733\u973b\u9743\u974d\u974f\u9751\u9755\u9857\u9865\ufa2a\ufa2b\u9927\ufa2c\u999e\u9a4e\u9ad9\u9adc\u9b75\u9b72\u9b8f\u9bb1\u9bbb\u9c00\u9d70\u9d6b\ufa2d\u9e19\u9ed1\ufffd\ufffd\u2170\u2171\u2172\u2173\u2174\u2175\u2176\u2177\u2178\u2179\u3052\u00a6\uff07\uff02"_s,
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
		u"\u2170\u2171\u2172\u2173\u2174\u2175\u2176\u2177\u2178\u2179\u2160\u2161\u2162\u2163\u2164\u2165\u2166\u2167\u2168\u2169\u3052\u00a6\uff07\uff02\u3231\u2116\u2121\u306e\u7e8a\u891c\u9348\u9288\u84dc\u4fc9\u70bb\u6631\u68c8\u92f9\u66fb\u5f45\u4e28\u4ee1\u4efc\u4f00\u4f03\u4f39\u4f56\u4f92\u4f8a\u4f9a\u4f94\u4fcd\u5040\u5022\u4fff\u501e\u5046\u5070\u5042\u5094\u50f4\u50d8\u514a\u5164\u519d\u51be\u51ec\u5215\u529c\u52a6\u52c0\u52db\u5300\u5307\u5324\u5372\u5393\u53b2\u53dd\ufa0e\u549c\u548a\u54a9\u54ff\u5586\u5759\u5765\u57ac\u57c8\u57c7\ufa0f\ufa10\u589e\u58b2"_s,
		u"\u590b\u5953\u595b\u595d\u5963\u59a4\u59ba\u5b56\u5bc0\u752f\u5bd8\u5bec\u5c1e\u5ca6\u5cba\u5cf5\u5d27\u5d53\ufa11\u5d42\u5d6d\u5db8\u5db9\u5dd0\u5f21\u5f34\u5f67\u5fb7\u5fde\u605d\u6085\u608a\u60de\u60d5\u6120\u60f2\u6111\u6137\u6130\u6198\u6213\u62a6\u63f5\u6460\u649d\u64ce\u654e\u6600\u6615\u663b\u6609\u662e\u661e\u6624\u6665\u6657\u6659\ufa12\u6673\u6699\u66a0\u66b2\u66bf\u66fa\u670e\uf929\u6766\u67bb\u6852\u67c0\u6801\u6844\u68cf\ufa13\u6968\ufa14\u6998\u69e2\u6a30\u6a6b\u6a46\u6a73\u6a7e\u6ae2\u6ae4\u6bd6\u6c3f\u6c5c\u6c86\u6c6f\u6cda\u6d04\u6d87\u6d6f"_s,
		u"\u6d96\u6dac\u6dcf\u6df8\u6df2\u6dfc\u6e39\u6e5c\u6e27\u6e3c\u6ebf\u6f88\u6fb5\u6ff5\u7005\u7007\u7028\u7085\u70ab\u710f\u7104\u715c\u7146\u7147\ufa15\u71c1\u71fe\u72b1\u72be\u7324\ufa16\u7377\u73bd\u73c9\u73d6\u73e3\u73d2\u7407\u73f5\u7426\u742a\u7429\u742e\u7462\u7489\u749f\u7501\u756f\u7682\u769c\u769e\u769b\u76a6\ufa17\u7746\u52af\u7821\u784e\u7864\u787a\u7930\ufa18\ufa19\ufa1a\u7994\ufa1b\u799b\u7ad1\u7ae7\ufa1c\u7aeb\u7b9e\ufa1d\u7d48\u7d5c\u7db7\u7da0\u7dd6\u7e52\u7f47\u7fa1\ufa1e\u8301\u8362\u837f\u83c7\u83f6\u8448\u84b4\u8553\u8559\u856b\ufa1f\u85b0"_s,
		u"\ufa20\ufa21\u8807\u88f5\u8a12\u8a37\u8a79\u8aa7\u8abe\u8adf\ufa22\u8af6\u8b53\u8b7f\u8cf0\u8cf4\u8d12\u8d76\ufa23\u8ecf\ufa24\ufa25\u9067\u90de\ufa26\u9115\u9127\u91da\u91d7\u91de\u91ed\u91ee\u91e4\u91e5\u9206\u9210\u920a\u923a\u9240\u923c\u924e\u9259\u9251\u9239\u9267\u92a7\u9277\u9278\u92e7\u92d7\u92d9\u92d0\ufa27\u92d5\u92e0\u92d3\u9325\u9321\u92fb\ufa28\u931e\u92ff\u931d\u9302\u9370\u9357\u93a4\u93c6\u93de\u93f8\u9431\u9445\u9448\u9592\uf9dc\ufa29\u969d\u96af\u9733\u973b\u9743\u974d\u974f\u9751\u9755\u9857\u9865\ufa2a\ufa2b\u9927\ufa2c\u999e\u9a4e\u9ad9"_s,
		u"\u9adc\u9b75\u9b72\u9b8f\u9bb1\u9bbb\u9c00\u9d70\u9d6b\ufa2d\u9e19\u9ed1\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd\ufffd"_s,
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