#include <sun/nio/cs/CharsetMapping$2.h>

#include <sun/nio/cs/CharsetMapping$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetMapping$Entry = ::sun::nio::cs::CharsetMapping$Entry;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _CharsetMapping$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CharsetMapping$2::*)()>(&CharsetMapping$2::init$))},
	{"compare", "(Lsun/nio/cs/CharsetMapping$Entry;Lsun/nio/cs/CharsetMapping$Entry;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CharsetMapping$2_EnclosingMethodInfo_ = {
	"sun.nio.cs.CharsetMapping",
	nullptr,
	nullptr
};

$InnerClassInfo _CharsetMapping$2_InnerClassesInfo_[] = {
	{"sun.nio.cs.CharsetMapping$2", nullptr, nullptr, 0},
	{"sun.nio.cs.CharsetMapping$Entry", "sun.nio.cs.CharsetMapping", "Entry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CharsetMapping$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.CharsetMapping$2",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_CharsetMapping$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lsun/nio/cs/CharsetMapping$Entry;>;",
	&_CharsetMapping$2_EnclosingMethodInfo_,
	_CharsetMapping$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.CharsetMapping"
};

$Object* allocate$CharsetMapping$2($Class* clazz) {
	return $of($alloc(CharsetMapping$2));
}

void CharsetMapping$2::init$() {
}

int32_t CharsetMapping$2::compare($CharsetMapping$Entry* m1, $CharsetMapping$Entry* m2) {
	return $nc(m1)->bs - $nc(m2)->bs;
}

bool CharsetMapping$2::equals(Object$* obj) {
	return $equals(this, obj);
}

int32_t CharsetMapping$2::compare(Object$* m1, Object$* m2) {
	return this->compare($cast($CharsetMapping$Entry, m1), $cast($CharsetMapping$Entry, m2));
}

CharsetMapping$2::CharsetMapping$2() {
}

$Class* CharsetMapping$2::load$($String* name, bool initialize) {
	$loadClass(CharsetMapping$2, name, initialize, &_CharsetMapping$2_ClassInfo_, allocate$CharsetMapping$2);
	return class$;
}

$Class* CharsetMapping$2::class$ = nullptr;

		} // cs
	} // nio
} // sun