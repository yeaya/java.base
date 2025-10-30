#include <sun/nio/fs/UnixMountEntry.h>

#include <sun/nio/fs/Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Util = ::sun::nio::fs::Util;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixMountEntry_FieldInfo_[] = {
	{"name", "[B", nullptr, $PRIVATE, $field(UnixMountEntry, name$)},
	{"dir", "[B", nullptr, $PRIVATE, $field(UnixMountEntry, dir$)},
	{"fstype", "[B", nullptr, $PRIVATE, $field(UnixMountEntry, fstype$)},
	{"opts", "[B", nullptr, $PRIVATE, $field(UnixMountEntry, opts)},
	{"dev", "J", nullptr, $PRIVATE, $field(UnixMountEntry, dev$)},
	{"fstypeAsString", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(UnixMountEntry, fstypeAsString)},
	{"optionsAsString", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(UnixMountEntry, optionsAsString)},
	{}
};

$MethodInfo _UnixMountEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UnixMountEntry::*)()>(&UnixMountEntry::init$))},
	{"dev", "()J", nullptr, 0},
	{"dir", "()[B", nullptr, 0},
	{"fstype", "()Ljava/lang/String;", nullptr, 0},
	{"hasOption", "(Ljava/lang/String;)Z", nullptr, 0},
	{"isIgnored", "()Z", nullptr, 0},
	{"isReadOnly", "()Z", nullptr, 0},
	{"name", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$ClassInfo _UnixMountEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixMountEntry",
	"java.lang.Object",
	nullptr,
	_UnixMountEntry_FieldInfo_,
	_UnixMountEntry_MethodInfo_
};

$Object* allocate$UnixMountEntry($Class* clazz) {
	return $of($alloc(UnixMountEntry));
}

void UnixMountEntry::init$() {
}

$String* UnixMountEntry::name() {
	return $Util::toString(this->name$);
}

$String* UnixMountEntry::fstype() {
	if (this->fstypeAsString == nullptr) {
		$set(this, fstypeAsString, $Util::toString(this->fstype$));
	}
	return this->fstypeAsString;
}

$bytes* UnixMountEntry::dir() {
	return this->dir$;
}

int64_t UnixMountEntry::dev() {
	return this->dev$;
}

bool UnixMountEntry::hasOption($String* requested) {
	$useLocalCurrentObjectStackCache();
	if (this->optionsAsString == nullptr) {
		$set(this, optionsAsString, $Util::toString(this->opts));
	}
	{
		$var($StringArray, arr$, $Util::split(this->optionsAsString, u','));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, opt, arr$->get(i$));
			{
				if ($nc(opt)->equals(requested)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool UnixMountEntry::isIgnored() {
	return hasOption("ignore"_s);
}

bool UnixMountEntry::isReadOnly() {
	return hasOption("ro"_s);
}

UnixMountEntry::UnixMountEntry() {
}

$Class* UnixMountEntry::load$($String* name, bool initialize) {
	$loadClass(UnixMountEntry, name, initialize, &_UnixMountEntry_ClassInfo_, allocate$UnixMountEntry);
	return class$;
}

$Class* UnixMountEntry::class$ = nullptr;

		} // fs
	} // nio
} // sun