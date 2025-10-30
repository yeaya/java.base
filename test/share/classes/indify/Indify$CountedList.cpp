#include <indify/Indify$CountedList.h>

#include <indify/Indify.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/lang/reflect/Array.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $Indify$Chunk = ::indify::Indify$Chunk;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;

namespace indify {

$FieldInfo _Indify$CountedList_FieldInfo_[] = {
	{"itemClass", "Ljava/lang/Class;", "Ljava/lang/Class<+TT;>;", $FINAL, $field(Indify$CountedList, itemClass)},
	{"rowlen", "I", nullptr, $FINAL, $field(Indify$CountedList, rowlen)},
	{}
};

$MethodInfo _Indify$CountedList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/lang/Class;I)V", "(Ljava/lang/Class<+TT;>;I)V", 0, $method(static_cast<void(Indify$CountedList::*)($Class*,int32_t)>(&Indify$CountedList::init$))},
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<+TT;>;)V", 0, $method(static_cast<void(Indify$CountedList::*)($Class*)>(&Indify$CountedList::init$))},
	{"readFrom", "(Ljava/io/DataInputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeTo", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Indify$CountedList_InnerClassesInfo_[] = {
	{"indify.Indify$CountedList", "indify.Indify", "CountedList", $PRIVATE | $STATIC},
	{"indify.Indify$Chunk", "indify.Indify", "Chunk", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Indify$CountedList_ClassInfo_ = {
	$ACC_SUPER,
	"indify.Indify$CountedList",
	"java.util.ArrayList",
	"indify.Indify$Chunk",
	_Indify$CountedList_FieldInfo_,
	_Indify$CountedList_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/ArrayList<TT;>;Lindify/Indify$Chunk;",
	nullptr,
	_Indify$CountedList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"indify.Indify"
};

$Object* allocate$Indify$CountedList($Class* clazz) {
	return $of($alloc(Indify$CountedList));
}

$Object* Indify$CountedList::clone() {
	 return this->$ArrayList::clone();
}

bool Indify$CountedList::equals(Object$* arg0) {
	 return this->$ArrayList::equals(arg0);
}

int32_t Indify$CountedList::hashCode() {
	 return this->$ArrayList::hashCode();
}

$String* Indify$CountedList::toString() {
	 return this->$ArrayList::toString();
}

void Indify$CountedList::finalize() {
	this->$ArrayList::finalize();
}

void Indify$CountedList::init$($Class* itemClass, int32_t rowlen) {
	$ArrayList::init$();
	$set(this, itemClass, itemClass);
	this->rowlen = rowlen;
}

void Indify$CountedList::init$($Class* itemClass) {
	Indify$CountedList::init$(itemClass, -1);
}

void Indify$CountedList::readFrom($DataInputStream* in) {
	$useLocalCurrentObjectStackCache();
	int32_t count = $nc(in)->readUnsignedShort();
	while (size() < count) {
		if (this->rowlen < 0) {
			add($($Indify::readInput(in, this->itemClass)));
		} else {
			$Class* elemClass = $nc(this->itemClass)->getComponentType();
			$var($ObjectArray, row, $cast($ObjectArray, $1Array::newInstance(elemClass, this->rowlen)));
			for (int32_t i = 0; i < this->rowlen; ++i) {
				row->set(i, $($Indify::readInput(in, elemClass)));
			}
			add($($nc(this->itemClass)->cast(row)));
		}
	}
}

void Indify$CountedList::writeTo($DataOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->writeShort((int16_t)size());
	{
		$var($Iterator, i$, this->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, item, i$->next());
			{
				$Indify::writeOutput(out, item);
			}
		}
	}
}

Indify$CountedList::Indify$CountedList() {
}

$Class* Indify$CountedList::load$($String* name, bool initialize) {
	$loadClass(Indify$CountedList, name, initialize, &_Indify$CountedList_ClassInfo_, allocate$Indify$CountedList);
	return class$;
}

$Class* Indify$CountedList::class$ = nullptr;

} // indify