#include <sun/nio/cs/CharsetMapping$Entry.h>

#include <sun/nio/cs/CharsetMapping.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _CharsetMapping$Entry_FieldInfo_[] = {
	{"bs", "I", nullptr, $PUBLIC, $field(CharsetMapping$Entry, bs)},
	{"cp", "I", nullptr, $PUBLIC, $field(CharsetMapping$Entry, cp)},
	{"cp2", "I", nullptr, $PUBLIC, $field(CharsetMapping$Entry, cp2)},
	{}
};

$MethodInfo _CharsetMapping$Entry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CharsetMapping$Entry, init$, void)},
	{}
};

$InnerClassInfo _CharsetMapping$Entry_InnerClassesInfo_[] = {
	{"sun.nio.cs.CharsetMapping$Entry", "sun.nio.cs.CharsetMapping", "Entry", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CharsetMapping$Entry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.CharsetMapping$Entry",
	"java.lang.Object",
	nullptr,
	_CharsetMapping$Entry_FieldInfo_,
	_CharsetMapping$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_CharsetMapping$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.CharsetMapping"
};

$Object* allocate$CharsetMapping$Entry($Class* clazz) {
	return $of($alloc(CharsetMapping$Entry));
}

void CharsetMapping$Entry::init$() {
}

CharsetMapping$Entry::CharsetMapping$Entry() {
}

$Class* CharsetMapping$Entry::load$($String* name, bool initialize) {
	$loadClass(CharsetMapping$Entry, name, initialize, &_CharsetMapping$Entry_ClassInfo_, allocate$CharsetMapping$Entry);
	return class$;
}

$Class* CharsetMapping$Entry::class$ = nullptr;

		} // cs
	} // nio
} // sun