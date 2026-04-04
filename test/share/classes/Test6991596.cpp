#include <Test6991596.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef CLASS
#undef DEBUG
#undef MAX_VALUE
#undef MIN_VALUE
#undef NAME
#undef TYPE

using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;

bool Test6991596::$assertionsDisabled = false;
$Class* Test6991596::CLASS = nullptr;
$String* Test6991596::NAME = nullptr;
bool Test6991596::DEBUG = false;

void Test6991596::init$() {
}

void Test6991596::main($StringArray* args) {
	$init(Test6991596);
	testboolean();
	testbyte();
	testchar();
	testshort();
	testint();
	testlong();
}

$MethodHandle* Test6991596::getmh1($Class* ret, $Class* arg) {
	$init(Test6991596);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $$nc($MethodHandles::lookup())->findStatic(Test6991596::CLASS, Test6991596::NAME, $($MethodType::methodType(ret, arg)));
}

$MethodHandle* Test6991596::getmh2($MethodHandle* mh1, $Class* ret, $Class* arg) {
	$init(Test6991596);
	return $MethodHandles::explicitCastArguments(mh1, $($MethodType::methodType(ret, arg)));
}

$MethodHandle* Test6991596::getmh3($MethodHandle* mh1, $Class* ret, $Class* arg) {
	$init(Test6991596);
	return $MethodHandles::explicitCastArguments(mh1, $($MethodType::methodType(ret, arg)));
}

void Test6991596::testboolean() {
	$init(Test6991596);
	$var($booleans, a, $new($booleans, {
		true,
		false
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		doboolean(a->get(i));
	}
}

void Test6991596::doboolean(bool x) {
	$init(Test6991596);
	$useLocalObjectStack();
	if (Test6991596::DEBUG) {
		$nc($System::out)->println($$str({"boolean="_s, $$str(x)}));
	}
	{
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Boolean::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Boolean::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)(x ? 1 : 0))})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Boolean::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)(x ? 1 : 0))})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Boolean::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)(x ? 1 : 0))})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, b);
	}
}

void Test6991596::testbyte() {
	$init(Test6991596);
	$var($bytes, a, $new($bytes, {
		$Byte::MIN_VALUE,
		(int8_t)($Byte::MIN_VALUE + 1),
		(int8_t)-15,
		-1,
		0,
		1,
		15,
		(int8_t)($Byte::MAX_VALUE - 1),
		$Byte::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		dobyte(a->get(i));
	}
}

void Test6991596::dobyte(int8_t x) {
	$init(Test6991596);
	$useLocalObjectStack();
	if (Test6991596::DEBUG) {
		$nc($System::out)->println($$str({"byte="_s, $$str(x)}));
	}
	{
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Byte::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((x & 1) == 1)})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Byte::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Byte::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Byte::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, b);
	}
}

void Test6991596::testchar() {
	$init(Test6991596);
	$var($chars, a, $new($chars, {
		$Character::MIN_VALUE,
		(char16_t)($Character::MIN_VALUE + 1),
		15,
		255,
		4095,
		(char16_t)($Character::MAX_VALUE - 1),
		$Character::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		dochar(a->get(i));
	}
}

void Test6991596::dochar(char16_t x) {
	$init(Test6991596);
	$useLocalObjectStack();
	if (Test6991596::DEBUG) {
		$nc($System::out)->println($$str({"char="_s, $$str(x)}));
	}
	{
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Character::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((x & 1) == 1)})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Character::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Character::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Character::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, b);
	}
}

void Test6991596::testshort() {
	$init(Test6991596);
	$var($shorts, a, $new($shorts, {
		$Short::MIN_VALUE,
		(int16_t)($Short::MIN_VALUE + 1),
		(int16_t)-4095,
		(int16_t)-255,
		(int16_t)-15,
		-1,
		0,
		1,
		15,
		255,
		4095,
		(int16_t)($Short::MAX_VALUE - 1),
		$Short::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		doshort(a->get(i));
	}
}

void Test6991596::doshort(int16_t x) {
	$init(Test6991596);
	$useLocalObjectStack();
	if (Test6991596::DEBUG) {
		$nc($System::out)->println($$str({"short="_s, $$str(x)}));
	}
	{
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Short::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((x & 1) == 1)})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Short::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Short::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Short::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check((int32_t)x, (int32_t)a, b);
	}
}

void Test6991596::testint() {
	$init(Test6991596);
	$var($ints, a, $new($ints, {
		$Integer::MIN_VALUE,
		$Integer::MIN_VALUE + 1,
		-0x0fffffff,
		-0x00ffffff,
		-0x000fffff,
		-0x0000ffff,
		-4095,
		-255,
		-15,
		-1,
		0,
		1,
		15,
		255,
		4095,
		0x0000ffff,
		0x000fffff,
		0x00ffffff,
		0x0fffffff,
		$Integer::MAX_VALUE - 1,
		$Integer::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		doint(a->get(i));
	}
}

void Test6991596::doint(int32_t x) {
	$init(Test6991596);
	$useLocalObjectStack();
	if (Test6991596::DEBUG) {
		$nc($System::out)->println($$str({"int="_s, $$str(x)}));
	}
	{
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Integer::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((x & 1) == 1)})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Integer::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Integer::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Integer::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		if (!Test6991596::$assertionsDisabled && !(a == b)) {
			$throwNew($AssertionError, $$of($str({$$str(a), " != "_s, $$str(b)})));
		}
		check(x, (int32_t)a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Integer::TYPE, $Integer::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Integer::TYPE, $Integer::TYPE));
		int32_t a = $intValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of(x)})));
		int32_t b = $intValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
}

void Test6991596::testlong() {
	$init(Test6991596);
	$var($longs, a, $new($longs, {
		$Long::MIN_VALUE,
		$Long::MIN_VALUE + 1,
		-268435455,
		-16777215,
		-1048575,
		-65535,
		-4095,
		-255,
		-15,
		-1,
		0,
		1,
		15,
		255,
		4095,
		4095,
		65535,
		1048575,
		16777215,
		268435455,
		$Long::MAX_VALUE - 1,
		$Long::MAX_VALUE
	}));
	for (int32_t i = 0; i < a->length; ++i) {
		dolong(a->get(i));
	}
}

void Test6991596::dolong(int64_t x) {
	$init(Test6991596);
	$useLocalObjectStack();
	if (Test6991596::DEBUG) {
		$nc($System::out)->println($$str({"long="_s, $$str(x)}));
	}
	{
		$var($MethodHandle, mh1, getmh1($Boolean::TYPE, $Boolean::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Boolean::TYPE, $Long::TYPE));
		bool a = $booleanValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((x & (int64_t)1) == 1)})));
		bool b = $booleanValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Byte::TYPE, $Byte::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Byte::TYPE, $Long::TYPE));
		int8_t a = $byteValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int8_t)x)})));
		int8_t b = $byteValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Character::TYPE, $Character::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Character::TYPE, $Long::TYPE));
		char16_t a = $charValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((char16_t)x)})));
		char16_t b = $charValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Short::TYPE, $Short::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Short::TYPE, $Long::TYPE));
		int16_t a = $shortValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int16_t)x)})));
		int16_t b = $shortValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, (int32_t)a, b);
	}
	{
		$var($MethodHandle, mh1, getmh1($Integer::TYPE, $Integer::TYPE));
		$var($MethodHandle, mh2, getmh2(mh1, $Integer::TYPE, $Long::TYPE));
		int32_t a = $intValue($nc(mh1)->invokeExact($$new($ObjectArray, {$$of((int32_t)x)})));
		int32_t b = $intValue($nc(mh2)->invokeExact($$new($ObjectArray, {$$of(x)})));
		check(x, a, b);
	}
}

void Test6991596::check(bool x, bool e, bool a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, z2h(x));
	$var($String, var$1, z2h(e));
	p(var$0, var$1, $(z2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(z2h(x)));
		var$2->append(": "_s);
		var$2->append($(z2h(e)));
		var$2->append(" != "_s);
		var$2->append($(z2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::check(bool x, int8_t e, int8_t a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, z2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(z2h(x)));
		var$2->append(": "_s);
		var$2->append($(i2h(e)));
		var$2->append(" != "_s);
		var$2->append($(i2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::check(bool x, int32_t e, int32_t a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, z2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(z2h(x)));
		var$2->append(": "_s);
		var$2->append($(i2h(e)));
		var$2->append(" != "_s);
		var$2->append($(i2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::check(int32_t x, bool e, bool a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, i2h(x));
	$var($String, var$1, z2h(e));
	p(var$0, var$1, $(z2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(i2h(x)));
		var$2->append(": "_s);
		var$2->append($(z2h(e)));
		var$2->append(" != "_s);
		var$2->append($(z2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::check(int32_t x, int8_t e, int8_t a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, i2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(i2h(x)));
		var$2->append(": "_s);
		var$2->append($(i2h(e)));
		var$2->append(" != "_s);
		var$2->append($(i2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::check(int32_t x, int32_t e, int32_t a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, i2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(i2h(x)));
		var$2->append(": "_s);
		var$2->append($(i2h(e)));
		var$2->append(" != "_s);
		var$2->append($(i2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::check(int64_t x, bool e, bool a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, l2h(x));
	$var($String, var$1, z2h(e));
	p(var$0, var$1, $(z2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(l2h(x)));
		var$2->append(": "_s);
		var$2->append($(z2h(e)));
		var$2->append(" != "_s);
		var$2->append($(z2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::check(int64_t x, int8_t e, int8_t a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, l2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(l2h(x)));
		var$2->append(": "_s);
		var$2->append($(i2h(e)));
		var$2->append(" != "_s);
		var$2->append($(i2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::check(int64_t x, int32_t e, int32_t a) {
	$init(Test6991596);
	$useLocalObjectStack();
	$var($String, var$0, l2h(x));
	$var($String, var$1, i2h(e));
	p(var$0, var$1, $(i2h(a)));
	if (!Test6991596::$assertionsDisabled && !(e == a)) {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append($(l2h(x)));
		var$2->append(": "_s);
		var$2->append($(i2h(e)));
		var$2->append(" != "_s);
		var$2->append($(i2h(a)));
		$throwNew($AssertionError, $$of($str(var$2)));
	}
}

void Test6991596::p($String* x, $String* e, $String* a) {
	$init(Test6991596);
	if (Test6991596::DEBUG) {
		$nc($System::out)->println($$str({x, ": expected: "_s, e, ", actual: "_s, a}));
	}
}

$String* Test6991596::z2h(bool x) {
	$init(Test6991596);
	return x ? "1"_s : "0"_s;
}

$String* Test6991596::i2h(int32_t x) {
	$init(Test6991596);
	return $Integer::toHexString(x);
}

$String* Test6991596::l2h(int64_t x) {
	$init(Test6991596);
	return $Long::toHexString(x);
}

bool Test6991596::foo(bool i) {
	$init(Test6991596);
	return i;
}

int8_t Test6991596::foo(int8_t i) {
	$init(Test6991596);
	return i;
}

char16_t Test6991596::foo(char16_t i) {
	$init(Test6991596);
	return i;
}

int16_t Test6991596::foo(int16_t i) {
	$init(Test6991596);
	return i;
}

int32_t Test6991596::foo(int32_t i) {
	$init(Test6991596);
	return i;
}

void Test6991596::clinit$($Class* clazz) {
	$assignStatic(Test6991596::NAME, "foo"_s);
	Test6991596::$assertionsDisabled = !Test6991596::class$->desiredAssertionStatus();
	$assignStatic(Test6991596::CLASS, Test6991596::class$);
	Test6991596::DEBUG = $$nc($System::getProperty("DEBUG"_s, "false"_s))->equals("true"_s);
}

Test6991596::Test6991596() {
}

$Class* Test6991596::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Test6991596, $assertionsDisabled)},
		{"CLASS", "Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6991596, CLASS)},
		{"NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6991596, NAME)},
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6991596, DEBUG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6991596, init$, void)},
		{"check", "(ZZZ)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, bool, bool, bool)},
		{"check", "(ZBB)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, bool, int8_t, int8_t)},
		{"check", "(ZII)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, bool, int32_t, int32_t)},
		{"check", "(IZZ)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, int32_t, bool, bool)},
		{"check", "(IBB)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, int32_t, int8_t, int8_t)},
		{"check", "(III)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, int32_t, int32_t, int32_t)},
		{"check", "(JZZ)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, int64_t, bool, bool)},
		{"check", "(JBB)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, int64_t, int8_t, int8_t)},
		{"check", "(JII)V", nullptr, $STATIC, $staticMethod(Test6991596, check, void, int64_t, int32_t, int32_t)},
		{"doboolean", "(Z)V", nullptr, $STATIC, $staticMethod(Test6991596, doboolean, void, bool), "java.lang.Throwable"},
		{"dobyte", "(B)V", nullptr, $STATIC, $staticMethod(Test6991596, dobyte, void, int8_t), "java.lang.Throwable"},
		{"dochar", "(C)V", nullptr, $STATIC, $staticMethod(Test6991596, dochar, void, char16_t), "java.lang.Throwable"},
		{"doint", "(I)V", nullptr, $STATIC, $staticMethod(Test6991596, doint, void, int32_t), "java.lang.Throwable"},
		{"dolong", "(J)V", nullptr, $STATIC, $staticMethod(Test6991596, dolong, void, int64_t), "java.lang.Throwable"},
		{"doshort", "(S)V", nullptr, $STATIC, $staticMethod(Test6991596, doshort, void, int16_t), "java.lang.Throwable"},
		{"foo", "(Z)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6991596, foo, bool, bool)},
		{"foo", "(B)B", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6991596, foo, int8_t, int8_t)},
		{"foo", "(C)C", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6991596, foo, char16_t, char16_t)},
		{"foo", "(S)S", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6991596, foo, int16_t, int16_t)},
		{"foo", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6991596, foo, int32_t, int32_t)},
		{"getmh1", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticMethod(Test6991596, getmh1, $MethodHandle*, $Class*, $Class*), "java.lang.ReflectiveOperationException"},
		{"getmh2", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticMethod(Test6991596, getmh2, $MethodHandle*, $MethodHandle*, $Class*, $Class*)},
		{"getmh3", "(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $staticMethod(Test6991596, getmh3, $MethodHandle*, $MethodHandle*, $Class*, $Class*)},
		{"i2h", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Test6991596, i2h, $String*, int32_t)},
		{"l2h", "(J)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Test6991596, l2h, $String*, int64_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6991596, main, void, $StringArray*), "java.lang.Throwable"},
		{"p", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Test6991596, p, void, $String*, $String*, $String*)},
		{"testboolean", "()V", nullptr, $STATIC, $staticMethod(Test6991596, testboolean, void), "java.lang.Throwable"},
		{"testbyte", "()V", nullptr, $STATIC, $staticMethod(Test6991596, testbyte, void), "java.lang.Throwable"},
		{"testchar", "()V", nullptr, $STATIC, $staticMethod(Test6991596, testchar, void), "java.lang.Throwable"},
		{"testint", "()V", nullptr, $STATIC, $staticMethod(Test6991596, testint, void), "java.lang.Throwable"},
		{"testlong", "()V", nullptr, $STATIC, $staticMethod(Test6991596, testlong, void), "java.lang.Throwable"},
		{"testshort", "()V", nullptr, $STATIC, $staticMethod(Test6991596, testshort, void), "java.lang.Throwable"},
		{"z2h", "(Z)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Test6991596, z2h, $String*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6991596",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6991596, name, initialize, &classInfo$$, Test6991596::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test6991596);
	});
	return class$;
}

$Class* Test6991596::class$ = nullptr;