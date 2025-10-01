#include <java/util/zip/ZipOutputStream$XEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipOutputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipOutputStream = ::java::util::zip::ZipOutputStream;

namespace java {
	namespace util {
		namespace zip {

$FieldInfo _ZipOutputStream$XEntry_FieldInfo_[] = {
	{"entry", "Ljava/util/zip/ZipEntry;", nullptr, $FINAL, $field(ZipOutputStream$XEntry, entry)},
	{"offset", "J", nullptr, $FINAL, $field(ZipOutputStream$XEntry, offset)},
	{}
};

$MethodInfo _ZipOutputStream$XEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/zip/ZipEntry;J)V", nullptr, $PUBLIC, $method(static_cast<void(ZipOutputStream$XEntry::*)($ZipEntry*,int64_t)>(&ZipOutputStream$XEntry::init$))},
	{}
};

$InnerClassInfo _ZipOutputStream$XEntry_InnerClassesInfo_[] = {
	{"java.util.zip.ZipOutputStream$XEntry", "java.util.zip.ZipOutputStream", "XEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ZipOutputStream$XEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.zip.ZipOutputStream$XEntry",
	"java.lang.Object",
	nullptr,
	_ZipOutputStream$XEntry_FieldInfo_,
	_ZipOutputStream$XEntry_MethodInfo_,
	nullptr,
	nullptr,
	_ZipOutputStream$XEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipOutputStream"
};

$Object* allocate$ZipOutputStream$XEntry($Class* clazz) {
	return $of($alloc(ZipOutputStream$XEntry));
}

void ZipOutputStream$XEntry::init$($ZipEntry* entry, int64_t offset) {
	$set(this, entry, entry);
	this->offset = offset;
}

ZipOutputStream$XEntry::ZipOutputStream$XEntry() {
}

$Class* ZipOutputStream$XEntry::load$($String* name, bool initialize) {
	$loadClass(ZipOutputStream$XEntry, name, initialize, &_ZipOutputStream$XEntry_ClassInfo_, allocate$ZipOutputStream$XEntry);
	return class$;
}

$Class* ZipOutputStream$XEntry::class$ = nullptr;

		} // zip
	} // util
} // java