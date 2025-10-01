#include <ImplicitStringConcatAssignLHS.h>

#include <ImplicitStringConcatAssignLHS$MyClass.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ARR_SIZE

using $ImplicitStringConcatAssignLHS$MyClass = ::ImplicitStringConcatAssignLHS$MyClass;
using $CharSequenceArray = $Array<::java::lang::CharSequence>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ImplicitStringConcatAssignLHS_FieldInfo_[] = {
	{"ARR_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ImplicitStringConcatAssignLHS, ARR_SIZE)},
	{"x", "I", nullptr, $STATIC, $staticField(ImplicitStringConcatAssignLHS, x)},
	{}
};

$MethodInfo _ImplicitStringConcatAssignLHS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImplicitStringConcatAssignLHS::*)()>(&ImplicitStringConcatAssignLHS::init$))},
	{"check", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,$String*)>(&ImplicitStringConcatAssignLHS::check))},
	{"getCharSequenceArray", "()[Ljava/lang/CharSequence;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CharSequenceArray*(*)()>(&ImplicitStringConcatAssignLHS::getCharSequenceArray))},
	{"getIndex", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&ImplicitStringConcatAssignLHS::getIndex))},
	{"getMyClass", "()LImplicitStringConcatAssignLHS$MyClass;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImplicitStringConcatAssignLHS$MyClass*(*)()>(&ImplicitStringConcatAssignLHS::getMyClass))},
	{"getObjArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ObjectArray*(*)()>(&ImplicitStringConcatAssignLHS::getObjArray))},
	{"getStringArray", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&ImplicitStringConcatAssignLHS::getStringArray))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ImplicitStringConcatAssignLHS::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ImplicitStringConcatAssignLHS_InnerClassesInfo_[] = {
	{"ImplicitStringConcatAssignLHS$MyClass", "ImplicitStringConcatAssignLHS", "MyClass", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ImplicitStringConcatAssignLHS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ImplicitStringConcatAssignLHS",
	"java.lang.Object",
	nullptr,
	_ImplicitStringConcatAssignLHS_FieldInfo_,
	_ImplicitStringConcatAssignLHS_MethodInfo_,
	nullptr,
	nullptr,
	_ImplicitStringConcatAssignLHS_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ImplicitStringConcatAssignLHS$MyClass"
};

$Object* allocate$ImplicitStringConcatAssignLHS($Class* clazz) {
	return $of($alloc(ImplicitStringConcatAssignLHS));
}

int32_t ImplicitStringConcatAssignLHS::x = 0;

void ImplicitStringConcatAssignLHS::init$() {
}

void ImplicitStringConcatAssignLHS::main($StringArray* args) {
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$var($ObjectArray, arr, $new($ObjectArray, ImplicitStringConcatAssignLHS::ARR_SIZE));
		$nc(arr)->plusAssign(ImplicitStringConcatAssignLHS::x++, "foo"_s);
		check(1, "plain-plain Object[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$nc(getObjArray())->plusAssign(ImplicitStringConcatAssignLHS::x++, "foo"_s);
		check(2, "method-plain Object[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$nc(getObjArray())->plusAssign(getIndex(), "foo"_s);
		check(2, "method-method Object[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$var($StringArray, arr, $new($StringArray, ImplicitStringConcatAssignLHS::ARR_SIZE));
		$nc(arr)->plusAssign(ImplicitStringConcatAssignLHS::x++, "foo"_s);
		check(1, "plain-plain String[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$nc(getStringArray())->plusAssign(ImplicitStringConcatAssignLHS::x++, "foo"_s);
		check(2, "method-plain String[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$nc(getStringArray())->plusAssign(getIndex(), "foo"_s);
		check(2, "method-method String[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$var($CharSequenceArray, arr, $new($CharSequenceArray, ImplicitStringConcatAssignLHS::ARR_SIZE));
		$nc(arr)->plusAssign(ImplicitStringConcatAssignLHS::x++, "foo"_s);
		check(1, "plain-plain CharSequence[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$nc(getCharSequenceArray())->plusAssign(ImplicitStringConcatAssignLHS::x++, "foo"_s);
		check(2, "method-plain CharSequence[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$nc(getCharSequenceArray())->plusAssign(getIndex(), "foo"_s);
		check(2, "method-method CharSequence[]"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$plusAssignField($$new($ImplicitStringConcatAssignLHS$MyClass), s, "foo"_s);
		check(1, "MyClass::new (String)"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$plusAssignField($(getMyClass()), s, "foo"_s);
		check(1, "method MyClass::new (String)"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$plusAssignField($$new($ImplicitStringConcatAssignLHS$MyClass), o, "foo"_s);
		check(1, "MyClass::new (object)"_s);
	}
	{
		$init(ImplicitStringConcatAssignLHS);
		ImplicitStringConcatAssignLHS::x = 0;
		$plusAssignField($(getMyClass()), o, "foo"_s);
		check(1, "method MyClass::new (object)"_s);
	}
}

void ImplicitStringConcatAssignLHS::check(int32_t expected, $String* label) {
	$init(ImplicitStringConcatAssignLHS);
	if (ImplicitStringConcatAssignLHS::x != expected) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append(label);
		sb->append(": "_s);
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append("actual = "_s);
		sb->append(ImplicitStringConcatAssignLHS::x);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

int32_t ImplicitStringConcatAssignLHS::getIndex() {
	$init(ImplicitStringConcatAssignLHS);
	return ImplicitStringConcatAssignLHS::x++;
}

$ImplicitStringConcatAssignLHS$MyClass* ImplicitStringConcatAssignLHS::getMyClass() {
	return $new($ImplicitStringConcatAssignLHS$MyClass);
}

$ObjectArray* ImplicitStringConcatAssignLHS::getObjArray() {
	$init(ImplicitStringConcatAssignLHS);
	++ImplicitStringConcatAssignLHS::x;
	return $new($ObjectArray, ImplicitStringConcatAssignLHS::ARR_SIZE);
}

$StringArray* ImplicitStringConcatAssignLHS::getStringArray() {
	$init(ImplicitStringConcatAssignLHS);
	++ImplicitStringConcatAssignLHS::x;
	return $new($StringArray, ImplicitStringConcatAssignLHS::ARR_SIZE);
}

$CharSequenceArray* ImplicitStringConcatAssignLHS::getCharSequenceArray() {
	$init(ImplicitStringConcatAssignLHS);
	++ImplicitStringConcatAssignLHS::x;
	return $fcast($CharSequenceArray, $new($StringArray, ImplicitStringConcatAssignLHS::ARR_SIZE));
}

ImplicitStringConcatAssignLHS::ImplicitStringConcatAssignLHS() {
}

$Class* ImplicitStringConcatAssignLHS::load$($String* name, bool initialize) {
	$loadClass(ImplicitStringConcatAssignLHS, name, initialize, &_ImplicitStringConcatAssignLHS_ClassInfo_, allocate$ImplicitStringConcatAssignLHS);
	return class$;
}

$Class* ImplicitStringConcatAssignLHS::class$ = nullptr;