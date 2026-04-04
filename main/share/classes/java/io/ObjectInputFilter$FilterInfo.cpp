#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$Class* ObjectInputFilter$FilterInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"arrayLength", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, arrayLength, int64_t)},
		{"depth", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, depth, int64_t)},
		{"references", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, references, int64_t)},
		{"serialClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, serialClass, $Class*)},
		{"streamBytes", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, streamBytes, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectInputFilter$FilterInfo", "java.io.ObjectInputFilter", "FilterInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.io.ObjectInputFilter$FilterInfo",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectInputFilter"
	};
	$loadClass(ObjectInputFilter$FilterInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectInputFilter$FilterInfo);
	});
	return class$;
}

$Class* ObjectInputFilter$FilterInfo::class$ = nullptr;

	} // io
} // java