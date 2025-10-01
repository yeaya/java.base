#include <indify/Indify$Pool.h>

#include <indify/Indify$Constant.h>
#include <indify/Indify$CountedList.h>
#include <indify/Indify.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Map.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ShortArray = $Array<::java::lang::Short>;
using $Indify = ::indify::Indify;
using $Indify$Constant = ::indify::Indify$Constant;
using $Indify$CountedList = ::indify::Indify$CountedList;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Map = ::java::util::Map;
using $TreeMap = ::java::util::TreeMap;

namespace indify {

$FieldInfo _Indify$Pool_FieldInfo_[] = {
	{"strings", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Short;>;", $PRIVATE, $field(Indify$Pool, strings)},
	{}
};

$MethodInfo _Indify$Pool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Indify$Pool::*)()>(&Indify$Pool::init$))},
	{"addConstant", "(BLjava/lang/Object;)Lindify/Indify$Constant;", "<T:Ljava/lang/Object;>(BTT;)Lindify/Indify$Constant;", $PUBLIC},
	{"get", "(I)Lindify/Indify$Constant;", nullptr, $PUBLIC},
	{"getMemberRef", "(S)[Ljava/lang/Short;", nullptr, 0},
	{"getString", "(BS)Ljava/lang/String;", nullptr, 0},
	{"getString", "(S)Ljava/lang/String;", nullptr, 0},
	{"getStrings", "([Ljava/lang/Short;)[Ljava/lang/String;", nullptr, 0},
	{"readConstant", "(Ljava/io/DataInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Indify$Pool::*)($DataInputStream*)>(&Indify$Pool::readConstant)), "java.io.IOException"},
	{"readFrom", "(Ljava/io/DataInputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"stringIndex", "(Ljava/lang/String;Z)I", nullptr, 0},
	{"writeTo", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Indify$Pool_InnerClassesInfo_[] = {
	{"indify.Indify$Pool", "indify.Indify", "Pool", $PUBLIC | $STATIC},
	{"indify.Indify$CountedList", "indify.Indify", "CountedList", $PRIVATE | $STATIC},
	{"indify.Indify$Constant", "indify.Indify", "Constant", $PUBLIC | $STATIC},
	{"indify.Indify$Chunk", "indify.Indify", "Chunk", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Indify$Pool_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"indify.Indify$Pool",
	"indify.Indify$CountedList",
	nullptr,
	_Indify$Pool_FieldInfo_,
	_Indify$Pool_MethodInfo_,
	"Lindify/Indify$CountedList<Lindify/Indify$Constant;>;Lindify/Indify$Chunk;",
	nullptr,
	_Indify$Pool_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$Pool($Class* clazz) {
	return $of($alloc(Indify$Pool));
}

void Indify$Pool::init$() {
	$load($Indify$Constant);
	$Indify$CountedList::init$($Indify$Constant::class$);
	$set(this, strings, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
}

void Indify$Pool::readFrom($DataInputStream* in) {
	int32_t count = $nc(in)->readUnsignedShort();
	add(nullptr);
	while (size() < count) {
		readConstant(in);
	}
}

$Indify$Constant* Indify$Pool::addConstant(int8_t tag, Object$* item) {
	$var($Indify$Constant, con, $new($Indify$Constant, size(), tag, item));
	int32_t idx = indexOf(con);
	if (idx >= 0) {
		return $cast($Indify$Constant, get(idx));
	}
	add(con);
	if (tag == (int8_t)1) {
		$nc(this->strings)->put($cast($String, item), $($Short::valueOf((int16_t)con->index)));
	}
	return con;
}

void Indify$Pool::readConstant($DataInputStream* in) {
	int8_t tag = $nc(in)->readByte();
	int32_t index = size();
	$var($Object, arg, nullptr);
	switch (tag) {
	case 1:
		{
			$assign(arg, in->readUTF());
			$nc(this->strings)->put($cast($String, arg), $($Short::valueOf((int16_t)size())));
			break;
		}
	case 3:
		{}
	case 4:
		{
			$assign(arg, $Integer::valueOf(in->readInt()));
			break;
		}
	case 5:
		{}
	case 6:
		{
			add($$new($Indify$Constant, index, tag, $($Long::valueOf(in->readLong()))));
			add(nullptr);
			return;
		}
	case 7:
		{}
	case 8:
		{
			$assign(arg, $Short::valueOf(in->readShort()));
			break;
		}
	case 9:
		{}
	case 10:
		{}
	case 11:
		{}
	case 12:
		{}
	case 18:
		{
			$assign(arg, $new($ShortArray, {
				$($Short::valueOf(in->readShort())),
				$($Short::valueOf(in->readShort()))
			}));
			break;
		}
	case 15:
		{
			$assign(arg, $new($ObjectArray, {
				$($of($Byte::valueOf(in->readByte()))),
				$($of($Short::valueOf(in->readShort())))
			}));
			break;
		}
	case 16:
		{
			$assign(arg, $Short::valueOf(in->readShort()));
			break;
		}
	default:
		{
			$throwNew($InternalError, $$str({"bad CP tag "_s, $$str(tag)}));
		}
	}
	add($$new($Indify$Constant, index, tag, arg));
}

$Object* Indify$Pool::get(int32_t index) {
	return $of($cast($Indify$Constant, $Indify$CountedList::get((char16_t)index)));
}

$String* Indify$Pool::getString(int8_t tag, int16_t index) {
	$nc($($cast($Indify$Constant, get(index))))->checkTag(tag);
	return getString(index);
}

$String* Indify$Pool::getString(int16_t index) {
	$var($Object, v, $nc($($cast($Indify$Constant, get(index))))->item);
	if ($instanceOf($Short, v)) {
		$assign(v, $nc($($nc($($cast($Indify$Constant, get($nc(($cast($Short, v)))->shortValue()))))->checkTag((int8_t)1)))->item);
	}
	return $cast($String, v);
}

$StringArray* Indify$Pool::getStrings($ShortArray* indexes) {
	$var($StringArray, res, $new($StringArray, $nc(indexes)->length));
	for (int32_t i = 0; i < indexes->length; ++i) {
		res->set(i, $(getString($nc(indexes->get(i))->shortValue())));
	}
	return res;
}

int32_t Indify$Pool::stringIndex($String* name, bool createIfNotFound) {
	$var($Short, x, $cast($Short, $nc(this->strings)->get(name)));
	if (x != nullptr) {
		return (char16_t)(int32_t)x->shortValue();
	}
	if (!createIfNotFound) {
		return 0;
	}
	return $nc($(addConstant((int8_t)1, name)))->index;
}

$ShortArray* Indify$Pool::getMemberRef(int16_t index) {
	$var($ShortArray, cls_nnt, $nc($($cast($Indify$Constant, get(index))))->itemIndexes());
	$var($ShortArray, name_type, $nc($($cast($Indify$Constant, get($nc($nc(cls_nnt)->get(1))->shortValue()))))->itemIndexes());
	return $new($ShortArray, {
		$nc(cls_nnt)->get(0),
		$nc(name_type)->get(0),
		name_type->get(1)
	});
}

void Indify$Pool::writeTo($DataOutputStream* out) {
	$Indify$CountedList::writeTo(out);
}

Indify$Pool::Indify$Pool() {
}

$Class* Indify$Pool::load$($String* name, bool initialize) {
	$loadClass(Indify$Pool, name, initialize, &_Indify$Pool_ClassInfo_, allocate$Indify$Pool);
	return class$;
}

$Class* Indify$Pool::class$ = nullptr;

} // indify