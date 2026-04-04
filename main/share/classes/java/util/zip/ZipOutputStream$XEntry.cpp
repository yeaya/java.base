#include <java/util/zip/ZipOutputStream$XEntry.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipOutputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ZipEntry = ::java::util::zip::ZipEntry;

namespace java {
	namespace util {
		namespace zip {

void ZipOutputStream$XEntry::init$($ZipEntry* entry, int64_t offset) {
	$set(this, entry, entry);
	this->offset = offset;
}

ZipOutputStream$XEntry::ZipOutputStream$XEntry() {
}

$Class* ZipOutputStream$XEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"entry", "Ljava/util/zip/ZipEntry;", nullptr, $FINAL, $field(ZipOutputStream$XEntry, entry)},
		{"offset", "J", nullptr, $FINAL, $field(ZipOutputStream$XEntry, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/zip/ZipEntry;J)V", nullptr, $PUBLIC, $method(ZipOutputStream$XEntry, init$, void, $ZipEntry*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.zip.ZipOutputStream$XEntry", "java.util.zip.ZipOutputStream", "XEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.zip.ZipOutputStream$XEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.zip.ZipOutputStream"
	};
	$loadClass(ZipOutputStream$XEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ZipOutputStream$XEntry);
	});
	return class$;
}

$Class* ZipOutputStream$XEntry::class$ = nullptr;

		} // zip
	} // util
} // java