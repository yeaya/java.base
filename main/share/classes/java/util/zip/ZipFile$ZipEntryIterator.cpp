#include <java/util/zip/ZipFile$ZipEntryIterator.h>

#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile$CleanableResource.h>
#include <java/util/zip/ZipFile$Source.h>
#include <java/util/zip/ZipFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ZipFile = ::java::util::zip::ZipFile;
using $ZipFile$Source = ::java::util::zip::ZipFile$Source;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _ZipFile$ZipEntryIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/zip/ZipFile;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFile$ZipEntryIterator, this$0)},
	{"i", "I", nullptr, $PRIVATE, $field(ZipFile$ZipEntryIterator, i)},
	{"entryCount", "I", nullptr, $PRIVATE | $FINAL, $field(ZipFile$ZipEntryIterator, entryCount)},
	{}
};

$MethodInfo _ZipFile$ZipEntryIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/zip/ZipFile;I)V", nullptr, $PUBLIC, $method(static_cast<void(ZipFile$ZipEntryIterator::*)($ZipFile*,int32_t)>(&ZipFile$ZipEntryIterator::init$))},
	{"asIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/zip/ZipEntry;", "()TT;", $PUBLIC},
	{"nextElement", "()Ljava/util/zip/ZipEntry;", "()TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ZipFile$ZipEntryIterator_InnerClassesInfo_[] = {
	{"java.util.zip.ZipFile$ZipEntryIterator", "java.util.zip.ZipFile", "ZipEntryIterator", $PRIVATE},
	{}
};

$ClassInfo _ZipFile$ZipEntryIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipFile$ZipEntryIterator",
	"java.lang.Object",
	"java.util.Enumeration,java.util.Iterator",
	_ZipFile$ZipEntryIterator_FieldInfo_,
	_ZipFile$ZipEntryIterator_MethodInfo_,
	"<T:Ljava/util/zip/ZipEntry;>Ljava/lang/Object;Ljava/util/Enumeration<TT;>;Ljava/util/Iterator<TT;>;",
	nullptr,
	_ZipFile$ZipEntryIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipFile"
};

$Object* allocate$ZipFile$ZipEntryIterator($Class* clazz) {
	return $of($alloc(ZipFile$ZipEntryIterator));
}

int32_t ZipFile$ZipEntryIterator::hashCode() {
	 return this->$Enumeration::hashCode();
}

bool ZipFile$ZipEntryIterator::equals(Object$* obj) {
	 return this->$Enumeration::equals(obj);
}

$Object* ZipFile$ZipEntryIterator::clone() {
	 return this->$Enumeration::clone();
}

$String* ZipFile$ZipEntryIterator::toString() {
	 return this->$Enumeration::toString();
}

void ZipFile$ZipEntryIterator::finalize() {
	this->$Enumeration::finalize();
}

void ZipFile$ZipEntryIterator::init$($ZipFile* this$0, int32_t entryCount) {
	$set(this, this$0, this$0);
	this->i = 0;
	this->entryCount = entryCount;
}

bool ZipFile$ZipEntryIterator::hasMoreElements() {
	return hasNext();
}

bool ZipFile$ZipEntryIterator::hasNext() {
	return this->i < this->entryCount;
}

$Object* ZipFile$ZipEntryIterator::nextElement() {
	return $of(next());
}

$Object* ZipFile$ZipEntryIterator::next() {
	$synchronized(this->this$0) {
		this->this$0->ensureOpen();
		if (!hasNext()) {
			$throwNew($NoSuchElementException);
		}
		return $of(this->this$0->getZipEntry(nullptr, $nc($nc(this->this$0->res)->zsrc)->getEntryPos(this->i++ * 3)));
	}
}

$Iterator* ZipFile$ZipEntryIterator::asIterator() {
	return this;
}

ZipFile$ZipEntryIterator::ZipFile$ZipEntryIterator() {
}

$Class* ZipFile$ZipEntryIterator::load$($String* name, bool initialize) {
	$loadClass(ZipFile$ZipEntryIterator, name, initialize, &_ZipFile$ZipEntryIterator_ClassInfo_, allocate$ZipFile$ZipEntryIterator);
	return class$;
}

$Class* ZipFile$ZipEntryIterator::class$ = nullptr;

		} // zip
	} // util
} // java