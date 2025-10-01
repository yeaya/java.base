#include <indify/Indify$Constant.h>

#include <indify/Indify.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TAG_NAMES

using $ShortArray = $Array<::java::lang::Short>;
using $Indify = ::indify::Indify;
using $Indify$Chunk = ::indify::Indify$Chunk;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;

namespace indify {

$FieldInfo _Indify$Constant_FieldInfo_[] = {
	{"tag", "B", nullptr, $PUBLIC | $FINAL, $field(Indify$Constant, tag)},
	{"item", "Ljava/lang/Object;", "TT;", $PUBLIC | $FINAL, $field(Indify$Constant, item)},
	{"index", "I", nullptr, $PUBLIC | $FINAL, $field(Indify$Constant, index)},
	{"TAG_NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Indify$Constant, TAG_NAMES)},
	{}
};

$MethodInfo _Indify$Constant_MethodInfo_[] = {
	{"<init>", "(IBLjava/lang/Object;)V", "(IBTT;)V", $PUBLIC, $method(static_cast<void(Indify$Constant::*)(int32_t,int8_t,Object$*)>(&Indify$Constant::init$))},
	{"checkTag", "(B)Lindify/Indify$Constant;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Lindify/Indify$Constant;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"itemAsComparable", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"itemIndex", "()Ljava/lang/Short;", nullptr, $PUBLIC},
	{"itemIndexes", "()[Ljava/lang/Short;", nullptr, $PUBLIC},
	{"itemString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"readFrom", "(Ljava/io/DataInputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"tagName", "(B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int8_t)>(&Indify$Constant::tagName))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeTo", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Indify$Constant_InnerClassesInfo_[] = {
	{"indify.Indify$Constant", "indify.Indify", "Constant", $PUBLIC | $STATIC},
	{"indify.Indify$Chunk", "indify.Indify", "Chunk", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Indify$Constant_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"indify.Indify$Constant",
	"java.lang.Object",
	"indify.Indify$Chunk",
	_Indify$Constant_FieldInfo_,
	_Indify$Constant_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Lindify/Indify$Chunk;",
	nullptr,
	_Indify$Constant_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Constant($Class* clazz) {
	return $of($alloc(Indify$Constant));
}

$StringArray* Indify$Constant::TAG_NAMES = nullptr;

void Indify$Constant::init$(int32_t index, int8_t tag, Object$* item) {
	this->index = index;
	this->tag = tag;
	$set(this, item, item);
}

Indify$Constant* Indify$Constant::checkTag(int8_t tag) {
	if (this->tag != tag) {
		$throwNew($InternalError, $(this->toString()));
	}
	return this;
}

$String* Indify$Constant::itemString() {
	return $cast($String, this->item);
}

$Short* Indify$Constant::itemIndex() {
	return $cast($Short, this->item);
}

$ShortArray* Indify$Constant::itemIndexes() {
	return $cast($ShortArray, this->item);
}

void Indify$Constant::readFrom($DataInputStream* in) {
	$throwNew($InternalError, "do not call"_s);
}

void Indify$Constant::writeTo($DataOutputStream* out) {
	$Indify::writeOutputs(out, $$new($ObjectArray, {
		$($of($Byte::valueOf(this->tag))),
		this->item
	}));
}

bool Indify$Constant::equals(Object$* x) {
	return ($instanceOf(Indify$Constant, x) && equals($cast(Indify$Constant, x)));
}

bool Indify$Constant::equals(Indify$Constant* that) {
	return (this->tag == $nc(that)->tag && $nc($of($(this->itemAsComparable())))->equals($(that->itemAsComparable())));
}

int32_t Indify$Constant::hashCode() {
	return (this->tag * 31) + $nc($of($(this->itemAsComparable())))->hashCode();
}

$Object* Indify$Constant::itemAsComparable() {
	switch (this->tag) {
	case 6:
		{
			return $of($Double::valueOf($Double::longBitsToDouble($nc(($cast($Long, this->item)))->longValue())));
		}
	case 4:
		{
			return $of($Float::valueOf($Float::intBitsToFloat($nc(($cast($Integer, this->item)))->intValue())));
		}
	}
	return $of(($instanceOf($ObjectArray, this->item) ? $of($Arrays::asList($cast($ObjectArray, this->item))) : this->item));
}

$String* Indify$Constant::toString() {
	$var($String, itstr, $String::valueOf($(itemAsComparable())));
	$var($String, var$1, $$str({$$str(this->index), ":"_s, $(tagName(this->tag))}));
	$var($String, var$0, $$concat(var$1, (itstr->startsWith("["_s) ? ""_s : "="_s)));
	return ($concat(var$0, itstr));
}

$String* Indify$Constant::tagName(int8_t tag) {
	$init(Indify$Constant);
	if (Indify$Constant::TAG_NAMES == nullptr) {
		$assignStatic(Indify$Constant::TAG_NAMES, ("None Utf8 Unicode Integer Float Long Double Class String Fieldref Methodref InterfaceMethodref NameAndType #13 #14 MethodHandle MethodType InvokeDynamic#17 InvokeDynamic"_s)->split(" "_s));
	}
	if (((int32_t)(tag & (uint32_t)255)) >= $nc(Indify$Constant::TAG_NAMES)->length) {
		return $str({"#"_s, $$str(((int32_t)(tag & (uint32_t)255)))});
	}
	return $nc(Indify$Constant::TAG_NAMES)->get((int32_t)(tag & (uint32_t)255));
}

Indify$Constant::Indify$Constant() {
}

$Class* Indify$Constant::load$($String* name, bool initialize) {
	$loadClass(Indify$Constant, name, initialize, &_Indify$Constant_ClassInfo_, allocate$Indify$Constant);
	return class$;
}

$Class* Indify$Constant::class$ = nullptr;

} // indify