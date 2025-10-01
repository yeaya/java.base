#include <Fields.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef NON_FINAL
#undef STATIC_NON_FINAL
#undef STATIC_FINAL
#undef FINAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Fields_FieldInfo_[] = {
	{"STATIC_FINAL", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Fields, STATIC_FINAL)},
	{"STATIC_NON_FINAL", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(Fields, STATIC_NON_FINAL)},
	{"FINAL", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Fields, FINAL)},
	{"NON_FINAL", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Fields, NON_FINAL)},
	{}
};

$MethodInfo _Fields_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Fields::*)()>(&Fields::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Fields_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Fields",
	"java.lang.Object",
	nullptr,
	_Fields_FieldInfo_,
	_Fields_MethodInfo_
};

$Object* allocate$Fields($Class* clazz) {
	return $of($alloc(Fields));
}

$Object* Fields::STATIC_FINAL = nullptr;
$Object* Fields::STATIC_NON_FINAL = nullptr;

void Fields::init$() {
	$set(this, FINAL, $new($Object));
	$set(this, NON_FINAL, $new($Object));
}

$String* Fields::name() {
	return $of(this)->getClass()->getName();
}

void clinit$Fields($Class* class$) {
	$assignStatic(Fields::STATIC_FINAL, $new($Object));
	$assignStatic(Fields::STATIC_NON_FINAL, $new($Object));
}

Fields::Fields() {
}

$Class* Fields::load$($String* name, bool initialize) {
	$loadClass(Fields, name, initialize, &_Fields_ClassInfo_, clinit$Fields, allocate$Fields);
	return class$;
}

$Class* Fields::class$ = nullptr;