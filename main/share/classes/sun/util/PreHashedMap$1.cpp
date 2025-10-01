#include <sun/util/PreHashedMap$1.h>

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
#include <sun/util/PreHashedMap$1$1.h>
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
using $PreHashedMap$1$1 = ::sun::util::PreHashedMap$1$1;

namespace sun {
	namespace util {

$FieldInfo _PreHashedMap$1_FieldInfo_[] = {
	{"this$0", "Lsun/util/PreHashedMap;", nullptr, $FINAL | $SYNTHETIC, $field(PreHashedMap$1, this$0)},
	{}
};

$MethodInfo _PreHashedMap$1_MethodInfo_[] = {
	{"<init>", "(Lsun/util/PreHashedMap;)V", nullptr, 0, $method(static_cast<void(PreHashedMap$1::*)($PreHashedMap*)>(&PreHashedMap$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PreHashedMap$1_EnclosingMethodInfo_ = {
	"sun.util.PreHashedMap",
	"keySet",
	"()Ljava/util/Set;"
};

$InnerClassInfo _PreHashedMap$1_InnerClassesInfo_[] = {
	{"sun.util.PreHashedMap$1", nullptr, nullptr, 0},
	{"sun.util.PreHashedMap$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PreHashedMap$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.PreHashedMap$1",
	"java.util.AbstractSet",
	nullptr,
	_PreHashedMap$1_FieldInfo_,
	_PreHashedMap$1_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/lang/String;>;",
	&_PreHashedMap$1_EnclosingMethodInfo_,
	_PreHashedMap$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.PreHashedMap"
};

$Object* allocate$PreHashedMap$1($Class* clazz) {
	return $of($alloc(PreHashedMap$1));
}

void PreHashedMap$1::init$($PreHashedMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t PreHashedMap$1::size() {
	return this->this$0->size$;
}

$Iterator* PreHashedMap$1::iterator() {
	return $new($PreHashedMap$1$1, this);
}

PreHashedMap$1::PreHashedMap$1() {
}

$Class* PreHashedMap$1::load$($String* name, bool initialize) {
	$loadClass(PreHashedMap$1, name, initialize, &_PreHashedMap$1_ClassInfo_, allocate$PreHashedMap$1);
	return class$;
}

$Class* PreHashedMap$1::class$ = nullptr;

	} // util
} // sun