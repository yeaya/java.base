#ifndef _jdk_internal_util_random_RandomSupport$DoubleZigguratTables_h_
#define _jdk_internal_util_random_RandomSupport$DoubleZigguratTables_h_
//$ class jdk.internal.util.random.RandomSupport$DoubleZigguratTables
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace util {
			namespace random {

class $import RandomSupport$DoubleZigguratTables : public ::java::lang::Object {
	$class(RandomSupport$DoubleZigguratTables, 0, ::java::lang::Object)
public:
	RandomSupport$DoubleZigguratTables();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	static const int32_t exponentialNumberOfLayers = 252;
	static const int32_t exponentialLayerMask = 255;
	static const int32_t exponentialAliasMask = 255;
	static const int32_t exponentialSignCorrectionMask = 255;
	static double exponentialX0;
	static const int64_t exponentialConvexMargin = (int64_t)0x0bd9e55c3077902d;
	static $doubles* exponentialX;
	static $doubles* exponentialY;
	static $longs* exponentialAliasThreshold;
	static $bytes* exponentialAliasMap;
	static const int32_t normalNumberOfLayers = 253;
	static const int32_t normalLayerMask = 255;
	static const int32_t normalAliasMask = 255;
	static const int32_t normalSignCorrectionMask = 255;
	static double normalX0;
	static const int32_t normalInflectionIndex = 204;
	static const int64_t normalConvexMargin = (int64_t)0x0a8db5b5be6d786f;
	static const int64_t normalConcaveMargin = (int64_t)0x1f7dc1df32286d4c;
	static $doubles* normalX;
	static $doubles* normalY;
	static $longs* normalAliasThreshold;
	static $bytes* normalAliasMap;
};

			} // random
		} // util
	} // internal
} // jdk

#endif // _jdk_internal_util_random_RandomSupport$DoubleZigguratTables_h_