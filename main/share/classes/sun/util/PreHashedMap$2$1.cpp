#include <sun/util/PreHashedMap$2$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/util/PreHashedMap$2$1$1.h>
#include <sun/util/PreHashedMap$2.h>
#include <sun/util/PreHashedMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $PreHashedMap = ::sun::util::PreHashedMap;
using $PreHashedMap$2 = ::sun::util::PreHashedMap$2;
using $PreHashedMap$2$1$1 = ::sun::util::PreHashedMap$2$1$1;

namespace sun {
	namespace util {

$FieldInfo _PreHashedMap$2$1_FieldInfo_[] = {
	{"this$1", "Lsun/util/PreHashedMap$2;", nullptr, $FINAL | $SYNTHETIC, $field(PreHashedMap$2$1, this$1)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/lang/String;>;", $FINAL, $field(PreHashedMap$2$1, i)},
	{}
};

$MethodInfo _PreHashedMap$2$1_MethodInfo_[] = {
	{"<init>", "(Lsun/util/PreHashedMap$2;)V", nullptr, 0, $method(static_cast<void(PreHashedMap$2$1::*)($PreHashedMap$2*)>(&PreHashedMap$2$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljava/lang/String;TV;>;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PreHashedMap$2$1_EnclosingMethodInfo_ = {
	"sun.util.PreHashedMap$2",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _PreHashedMap$2$1_InnerClassesInfo_[] = {
	{"sun.util.PreHashedMap$2", nullptr, nullptr, 0},
	{"sun.util.PreHashedMap$2$1", nullptr, nullptr, 0},
	{"sun.util.PreHashedMap$2$1$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PreHashedMap$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.PreHashedMap$2$1",
	"java.lang.Object",
	"java.util.Iterator",
	_PreHashedMap$2$1_FieldInfo_,
	_PreHashedMap$2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;TV;>;>;",
	&_PreHashedMap$2$1_EnclosingMethodInfo_,
	_PreHashedMap$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.PreHashedMap"
};

$Object* allocate$PreHashedMap$2$1($Class* clazz) {
	return $of($alloc(PreHashedMap$2$1));
}

void PreHashedMap$2$1::init$($PreHashedMap$2* this$1) {
	$set(this, this$1, this$1);
	$set(this, i, $nc($($nc(this->this$1->this$0)->keySet()))->iterator());
}

bool PreHashedMap$2$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* PreHashedMap$2$1::next() {
	return $of($new($PreHashedMap$2$1$1, this));
}

void PreHashedMap$2$1::remove() {
	$throwNew($UnsupportedOperationException);
}

PreHashedMap$2$1::PreHashedMap$2$1() {
}

$Class* PreHashedMap$2$1::load$($String* name, bool initialize) {
	$loadClass(PreHashedMap$2$1, name, initialize, &_PreHashedMap$2$1_ClassInfo_, allocate$PreHashedMap$2$1);
	return class$;
}

$Class* PreHashedMap$2$1::class$ = nullptr;

	} // util
} // sun