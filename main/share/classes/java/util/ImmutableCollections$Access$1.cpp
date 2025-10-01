#include <java/util/ImmutableCollections$Access$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ImmutableCollections$Access.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$Access = ::java::util::ImmutableCollections$Access;
using $List = ::java::util::List;
using $JavaUtilCollectionAccess = ::jdk::internal::access::JavaUtilCollectionAccess;

namespace java {
	namespace util {

$MethodInfo _ImmutableCollections$Access$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImmutableCollections$Access$1::*)()>(&ImmutableCollections$Access$1::init$))},
	{"listFromTrustedArray", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;)Ljava/util/List<TE;>;", $PUBLIC},
	{"listFromTrustedArrayNullsAllowed", "([Ljava/lang/Object;)Ljava/util/List;", "<E:Ljava/lang/Object;>([Ljava/lang/Object;)Ljava/util/List<TE;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImmutableCollections$Access$1_EnclosingMethodInfo_ = {
	"java.util.ImmutableCollections$Access",
	nullptr,
	nullptr
};

$InnerClassInfo _ImmutableCollections$Access$1_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$Access", "java.util.ImmutableCollections", "Access", $STATIC},
	{"java.util.ImmutableCollections$Access$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImmutableCollections$Access$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ImmutableCollections$Access$1",
	"java.lang.Object",
	"jdk.internal.access.JavaUtilCollectionAccess",
	nullptr,
	_ImmutableCollections$Access$1_MethodInfo_,
	nullptr,
	&_ImmutableCollections$Access$1_EnclosingMethodInfo_,
	_ImmutableCollections$Access$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$Access$1($Class* clazz) {
	return $of($alloc(ImmutableCollections$Access$1));
}

void ImmutableCollections$Access$1::init$() {
}

$List* ImmutableCollections$Access$1::listFromTrustedArray($ObjectArray* array) {
	return $ImmutableCollections::listFromTrustedArray(array);
}

$List* ImmutableCollections$Access$1::listFromTrustedArrayNullsAllowed($ObjectArray* array) {
	return $ImmutableCollections::listFromTrustedArrayNullsAllowed(array);
}

ImmutableCollections$Access$1::ImmutableCollections$Access$1() {
}

$Class* ImmutableCollections$Access$1::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$Access$1, name, initialize, &_ImmutableCollections$Access$1_ClassInfo_, allocate$ImmutableCollections$Access$1);
	return class$;
}

$Class* ImmutableCollections$Access$1::class$ = nullptr;

	} // util
} // java