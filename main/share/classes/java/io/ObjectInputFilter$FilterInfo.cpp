#include <java/io/ObjectInputFilter$FilterInfo.h>

#include <java/io/ObjectInputFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectInputFilter$FilterInfo_MethodInfo_[] = {
	{"arrayLength", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, arrayLength, int64_t)},
	{"depth", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, depth, int64_t)},
	{"references", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, references, int64_t)},
	{"serialClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, serialClass, $Class*)},
	{"streamBytes", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ObjectInputFilter$FilterInfo, streamBytes, int64_t)},
	{}
};

$InnerClassInfo _ObjectInputFilter$FilterInfo_InnerClassesInfo_[] = {
	{"java.io.ObjectInputFilter$FilterInfo", "java.io.ObjectInputFilter", "FilterInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ObjectInputFilter$FilterInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.io.ObjectInputFilter$FilterInfo",
	nullptr,
	nullptr,
	nullptr,
	_ObjectInputFilter$FilterInfo_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectInputFilter$FilterInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectInputFilter"
};

$Object* allocate$ObjectInputFilter$FilterInfo($Class* clazz) {
	return $of($alloc(ObjectInputFilter$FilterInfo));
}

$Class* ObjectInputFilter$FilterInfo::load$($String* name, bool initialize) {
	$loadClass(ObjectInputFilter$FilterInfo, name, initialize, &_ObjectInputFilter$FilterInfo_ClassInfo_, allocate$ObjectInputFilter$FilterInfo);
	return class$;
}

$Class* ObjectInputFilter$FilterInfo::class$ = nullptr;

	} // io
} // java