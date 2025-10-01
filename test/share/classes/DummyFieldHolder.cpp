#include <DummyFieldHolder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LongArray = $Array<::java::lang::Long>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _DummyFieldHolder_FieldInfo_[] = {
	{"staticField", "Ljava/lang/Integer;", nullptr, $PUBLIC | $STATIC, $staticField(DummyFieldHolder, staticField)},
	{"instanceField", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DummyFieldHolder, instanceField)},
	{"instanceByteField", "B", nullptr, $PUBLIC, $field(DummyFieldHolder, instanceByteField)},
	{}
};

$MethodInfo _DummyFieldHolder_MethodInfo_[] = {
	{"<init>", "(B[Ljava/lang/Long;)V", nullptr, $PUBLIC | $TRANSIENT, $method(static_cast<void(DummyFieldHolder::*)(int8_t,$LongArray*)>(&DummyFieldHolder::init$))},
	{}
};

$ClassInfo _DummyFieldHolder_ClassInfo_ = {
	$ACC_SUPER,
	"DummyFieldHolder",
	"java.lang.Object",
	nullptr,
	_DummyFieldHolder_FieldInfo_,
	_DummyFieldHolder_MethodInfo_
};

$Object* allocate$DummyFieldHolder($Class* clazz) {
	return $of($alloc(DummyFieldHolder));
}

$Integer* DummyFieldHolder::staticField = nullptr;

void DummyFieldHolder::init$(int8_t unused1, $LongArray* unused2) {
}

DummyFieldHolder::DummyFieldHolder() {
}

$Class* DummyFieldHolder::load$($String* name, bool initialize) {
	$loadClass(DummyFieldHolder, name, initialize, &_DummyFieldHolder_ClassInfo_, allocate$DummyFieldHolder);
	return class$;
}

$Class* DummyFieldHolder::class$ = nullptr;