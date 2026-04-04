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

namespace java {
	namespace util {
		namespace zip {

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
	return next();
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/zip/ZipFile;", nullptr, $FINAL | $SYNTHETIC, $field(ZipFile$ZipEntryIterator, this$0)},
		{"i", "I", nullptr, $PRIVATE, $field(ZipFile$ZipEntryIterator, i)},
		{"entryCount", "I", nullptr, $PRIVATE | $FINAL, $field(ZipFile$ZipEntryIterator, entryCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/zip/ZipFile;I)V", nullptr, $PUBLIC, $method(ZipFile$ZipEntryIterator, init$, void, $ZipFile*, int32_t)},
		{"asIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TT;>;", $PUBLIC, $virtualMethod(ZipFile$ZipEntryIterator, asIterator, $Iterator*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(ZipFile$ZipEntryIterator, hasMoreElements, bool)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ZipFile$ZipEntryIterator, hasNext, bool)},
		{"next", "()Ljava/util/zip/ZipEntry;", "()TT;", $PUBLIC, $virtualMethod(ZipFile$ZipEntryIterator, next, $Object*)},
		{"nextElement", "()Ljava/util/zip/ZipEntry;", "()TT;", $PUBLIC, $virtualMethod(ZipFile$ZipEntryIterator, nextElement, $Object*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.ZipFile$ZipEntryIterator", "java.util.zip.ZipFile", "ZipEntryIterator", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.zip.ZipFile$ZipEntryIterator",
		"java.lang.Object",
		"java.util.Enumeration,java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/util/zip/ZipEntry;>Ljava/lang/Object;Ljava/util/Enumeration<TT;>;Ljava/util/Iterator<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.zip.ZipFile"
	};
	$loadClass(ZipFile$ZipEntryIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ZipFile$ZipEntryIterator));
	});
	return class$;
}

$Class* ZipFile$ZipEntryIterator::class$ = nullptr;

		} // zip
	} // util
} // java