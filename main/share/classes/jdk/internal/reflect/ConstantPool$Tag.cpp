#include <jdk/internal/reflect/ConstantPool$Tag.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/reflect/ConstantPool.h>
#include <jcpp.h>

#undef FLOAT
#undef NAMEANDTYPE
#undef CLASS
#undef METHODHANDLE
#undef INVALID
#undef INVOKEDYNAMIC
#undef UTF8
#undef STRING
#undef METHODREF
#undef INTERFACEMETHODREF
#undef DOUBLE
#undef METHODTYPE
#undef INTEGER
#undef LONG
#undef FIELDREF

using $ConstantPool$TagArray = $Array<::jdk::internal::reflect::ConstantPool$Tag>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantPool = ::jdk::internal::reflect::ConstantPool;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _ConstantPool$Tag_FieldInfo_[] = {
	{"UTF8", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, UTF8)},
	{"INTEGER", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, INTEGER)},
	{"FLOAT", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, FLOAT)},
	{"LONG", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, LONG)},
	{"DOUBLE", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, DOUBLE)},
	{"CLASS", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, CLASS)},
	{"STRING", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, STRING)},
	{"FIELDREF", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, FIELDREF)},
	{"METHODREF", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, METHODREF)},
	{"INTERFACEMETHODREF", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, INTERFACEMETHODREF)},
	{"NAMEANDTYPE", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, NAMEANDTYPE)},
	{"METHODHANDLE", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, METHODHANDLE)},
	{"METHODTYPE", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, METHODTYPE)},
	{"INVOKEDYNAMIC", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, INVOKEDYNAMIC)},
	{"INVALID", "Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ConstantPool$Tag, INVALID)},
	{"$VALUES", "[Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ConstantPool$Tag, $VALUES)},
	{"tagCode", "I", nullptr, $PRIVATE | $FINAL, $field(ConstantPool$Tag, tagCode)},
	{}
};

$MethodInfo _ConstantPool$Tag_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ConstantPool$TagArray*(*)()>(&ConstantPool$Tag::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(ConstantPool$Tag::*)($String*,int32_t,int32_t)>(&ConstantPool$Tag::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ConstantPool$Tag*(*)($String*)>(&ConstantPool$Tag::valueOf))},
	{"valueOf", "(B)Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PRIVATE | $STATIC, $method(static_cast<ConstantPool$Tag*(*)(int8_t)>(&ConstantPool$Tag::valueOf))},
	{"values", "()[Ljdk/internal/reflect/ConstantPool$Tag;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ConstantPool$TagArray*(*)()>(&ConstantPool$Tag::values))},
	{}
};

$InnerClassInfo _ConstantPool$Tag_InnerClassesInfo_[] = {
	{"jdk.internal.reflect.ConstantPool$Tag", "jdk.internal.reflect.ConstantPool", "Tag", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ConstantPool$Tag_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.reflect.ConstantPool$Tag",
	"java.lang.Enum",
	nullptr,
	_ConstantPool$Tag_FieldInfo_,
	_ConstantPool$Tag_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/reflect/ConstantPool$Tag;>;",
	nullptr,
	_ConstantPool$Tag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.reflect.ConstantPool"
};

$Object* allocate$ConstantPool$Tag($Class* clazz) {
	return $of($alloc(ConstantPool$Tag));
}

ConstantPool$Tag* ConstantPool$Tag::UTF8 = nullptr;
ConstantPool$Tag* ConstantPool$Tag::INTEGER = nullptr;
ConstantPool$Tag* ConstantPool$Tag::FLOAT = nullptr;
ConstantPool$Tag* ConstantPool$Tag::LONG = nullptr;
ConstantPool$Tag* ConstantPool$Tag::DOUBLE = nullptr;
ConstantPool$Tag* ConstantPool$Tag::CLASS = nullptr;
ConstantPool$Tag* ConstantPool$Tag::STRING = nullptr;
ConstantPool$Tag* ConstantPool$Tag::FIELDREF = nullptr;
ConstantPool$Tag* ConstantPool$Tag::METHODREF = nullptr;
ConstantPool$Tag* ConstantPool$Tag::INTERFACEMETHODREF = nullptr;
ConstantPool$Tag* ConstantPool$Tag::NAMEANDTYPE = nullptr;
ConstantPool$Tag* ConstantPool$Tag::METHODHANDLE = nullptr;
ConstantPool$Tag* ConstantPool$Tag::METHODTYPE = nullptr;
ConstantPool$Tag* ConstantPool$Tag::INVOKEDYNAMIC = nullptr;
ConstantPool$Tag* ConstantPool$Tag::INVALID = nullptr;
$ConstantPool$TagArray* ConstantPool$Tag::$VALUES = nullptr;

$ConstantPool$TagArray* ConstantPool$Tag::$values() {
	$init(ConstantPool$Tag);
	return $new($ConstantPool$TagArray, {
		ConstantPool$Tag::UTF8,
		ConstantPool$Tag::INTEGER,
		ConstantPool$Tag::FLOAT,
		ConstantPool$Tag::LONG,
		ConstantPool$Tag::DOUBLE,
		ConstantPool$Tag::CLASS,
		ConstantPool$Tag::STRING,
		ConstantPool$Tag::FIELDREF,
		ConstantPool$Tag::METHODREF,
		ConstantPool$Tag::INTERFACEMETHODREF,
		ConstantPool$Tag::NAMEANDTYPE,
		ConstantPool$Tag::METHODHANDLE,
		ConstantPool$Tag::METHODTYPE,
		ConstantPool$Tag::INVOKEDYNAMIC,
		ConstantPool$Tag::INVALID
	});
}

$ConstantPool$TagArray* ConstantPool$Tag::values() {
	$init(ConstantPool$Tag);
	return $cast($ConstantPool$TagArray, ConstantPool$Tag::$VALUES->clone());
}

ConstantPool$Tag* ConstantPool$Tag::valueOf($String* name) {
	$init(ConstantPool$Tag);
	return $cast(ConstantPool$Tag, $Enum::valueOf(ConstantPool$Tag::class$, name));
}

void ConstantPool$Tag::init$($String* $enum$name, int32_t $enum$ordinal, int32_t tagCode) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->tagCode = tagCode;
}

ConstantPool$Tag* ConstantPool$Tag::valueOf(int8_t v) {
	$init(ConstantPool$Tag);
	{
		$var($ConstantPool$TagArray, arr$, ConstantPool$Tag::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			ConstantPool$Tag* tag = arr$->get(i$);
			{
				if ($nc(tag)->tagCode == v) {
					return tag;
				}
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Unknown constant pool tag code "_s, $$str(v)}));
}

void clinit$ConstantPool$Tag($Class* class$) {
	$assignStatic(ConstantPool$Tag::UTF8, $new(ConstantPool$Tag, "UTF8"_s, 0, 1));
	$assignStatic(ConstantPool$Tag::INTEGER, $new(ConstantPool$Tag, "INTEGER"_s, 1, 3));
	$assignStatic(ConstantPool$Tag::FLOAT, $new(ConstantPool$Tag, "FLOAT"_s, 2, 4));
	$assignStatic(ConstantPool$Tag::LONG, $new(ConstantPool$Tag, "LONG"_s, 3, 5));
	$assignStatic(ConstantPool$Tag::DOUBLE, $new(ConstantPool$Tag, "DOUBLE"_s, 4, 6));
	$assignStatic(ConstantPool$Tag::CLASS, $new(ConstantPool$Tag, "CLASS"_s, 5, 7));
	$assignStatic(ConstantPool$Tag::STRING, $new(ConstantPool$Tag, "STRING"_s, 6, 8));
	$assignStatic(ConstantPool$Tag::FIELDREF, $new(ConstantPool$Tag, "FIELDREF"_s, 7, 9));
	$assignStatic(ConstantPool$Tag::METHODREF, $new(ConstantPool$Tag, "METHODREF"_s, 8, 10));
	$assignStatic(ConstantPool$Tag::INTERFACEMETHODREF, $new(ConstantPool$Tag, "INTERFACEMETHODREF"_s, 9, 11));
	$assignStatic(ConstantPool$Tag::NAMEANDTYPE, $new(ConstantPool$Tag, "NAMEANDTYPE"_s, 10, 12));
	$assignStatic(ConstantPool$Tag::METHODHANDLE, $new(ConstantPool$Tag, "METHODHANDLE"_s, 11, 15));
	$assignStatic(ConstantPool$Tag::METHODTYPE, $new(ConstantPool$Tag, "METHODTYPE"_s, 12, 16));
	$assignStatic(ConstantPool$Tag::INVOKEDYNAMIC, $new(ConstantPool$Tag, "INVOKEDYNAMIC"_s, 13, 18));
	$assignStatic(ConstantPool$Tag::INVALID, $new(ConstantPool$Tag, "INVALID"_s, 14, 0));
	$assignStatic(ConstantPool$Tag::$VALUES, ConstantPool$Tag::$values());
}

ConstantPool$Tag::ConstantPool$Tag() {
}

$Class* ConstantPool$Tag::load$($String* name, bool initialize) {
	$loadClass(ConstantPool$Tag, name, initialize, &_ConstantPool$Tag_ClassInfo_, clinit$ConstantPool$Tag, allocate$ConstantPool$Tag);
	return class$;
}

$Class* ConstantPool$Tag::class$ = nullptr;

		} // reflect
	} // internal
} // jdk