#include <sun/util/PreHashedMap$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <sun/util/PreHashedMap$2$1.h>
#include <sun/util/PreHashedMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $PreHashedMap = ::sun::util::PreHashedMap;
using $PreHashedMap$2$1 = ::sun::util::PreHashedMap$2$1;

namespace sun {
	namespace util {

$FieldInfo _PreHashedMap$2_FieldInfo_[] = {
	{"this$0", "Lsun/util/PreHashedMap;", nullptr, $FINAL | $SYNTHETIC, $field(PreHashedMap$2, this$0)},
	{}
};

$MethodInfo _PreHashedMap$2_MethodInfo_[] = {
	{"<init>", "(Lsun/util/PreHashedMap;)V", nullptr, 0, $method(static_cast<void(PreHashedMap$2::*)($PreHashedMap*)>(&PreHashedMap$2::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;TV;>;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PreHashedMap$2_EnclosingMethodInfo_ = {
	"sun.util.PreHashedMap",
	"entrySet",
	"()Ljava/util/Set;"
};

$InnerClassInfo _PreHashedMap$2_InnerClassesInfo_[] = {
	{"sun.util.PreHashedMap$2", nullptr, nullptr, 0},
	{"sun.util.PreHashedMap$2$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PreHashedMap$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.PreHashedMap$2",
	"java.util.AbstractSet",
	nullptr,
	_PreHashedMap$2_FieldInfo_,
	_PreHashedMap$2_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljava/lang/String;TV;>;>;",
	&_PreHashedMap$2_EnclosingMethodInfo_,
	_PreHashedMap$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.PreHashedMap"
};

$Object* allocate$PreHashedMap$2($Class* clazz) {
	return $of($alloc(PreHashedMap$2));
}

void PreHashedMap$2::init$($PreHashedMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t PreHashedMap$2::size() {
	return this->this$0->size$;
}

$Iterator* PreHashedMap$2::iterator() {
	return $new($PreHashedMap$2$1, this);
}

PreHashedMap$2::PreHashedMap$2() {
}

$Class* PreHashedMap$2::load$($String* name, bool initialize) {
	$loadClass(PreHashedMap$2, name, initialize, &_PreHashedMap$2_ClassInfo_, allocate$PreHashedMap$2);
	return class$;
}

$Class* PreHashedMap$2::class$ = nullptr;

	} // util
} // sun