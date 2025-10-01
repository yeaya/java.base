#include <sun/nio/cs/CharsetMapping$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/cs/CharsetMapping$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $CharsetMapping$Entry = ::sun::nio::cs::CharsetMapping$Entry;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _CharsetMapping$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CharsetMapping$3::*)()>(&CharsetMapping$3::init$))},
	{"compare", "(Lsun/nio/cs/CharsetMapping$Entry;Lsun/nio/cs/CharsetMapping$Entry;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CharsetMapping$3_EnclosingMethodInfo_ = {
	"sun.nio.cs.CharsetMapping",
	nullptr,
	nullptr
};

$InnerClassInfo _CharsetMapping$3_InnerClassesInfo_[] = {
	{"sun.nio.cs.CharsetMapping$3", nullptr, nullptr, 0},
	{"sun.nio.cs.CharsetMapping$Entry", "sun.nio.cs.CharsetMapping", "Entry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CharsetMapping$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.CharsetMapping$3",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_CharsetMapping$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lsun/nio/cs/CharsetMapping$Entry;>;",
	&_CharsetMapping$3_EnclosingMethodInfo_,
	_CharsetMapping$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.CharsetMapping"
};

$Object* allocate$CharsetMapping$3($Class* clazz) {
	return $of($alloc(CharsetMapping$3));
}

void CharsetMapping$3::init$() {
}

int32_t CharsetMapping$3::compare($CharsetMapping$Entry* m1, $CharsetMapping$Entry* m2) {
	return $nc(m1)->cp - $nc(m2)->cp;
}

bool CharsetMapping$3::equals(Object$* obj) {
	return $equals(this, obj);
}

int32_t CharsetMapping$3::compare(Object$* m1, Object$* m2) {
	return this->compare($cast($CharsetMapping$Entry, m1), $cast($CharsetMapping$Entry, m2));
}

CharsetMapping$3::CharsetMapping$3() {
}

$Class* CharsetMapping$3::load$($String* name, bool initialize) {
	$loadClass(CharsetMapping$3, name, initialize, &_CharsetMapping$3_ClassInfo_, allocate$CharsetMapping$3);
	return class$;
}

$Class* CharsetMapping$3::class$ = nullptr;

		} // cs
	} // nio
} // sun