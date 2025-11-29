#include <sun/nio/fs/UnixFileModeAttribute.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <java/nio/file/attribute/PosixFilePermission.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <sun/nio/fs/UnixConstants.h>
#include <sun/nio/fs/UnixFileModeAttribute$1.h>
#include <jcpp.h>

#undef ALL_PERMISSIONS
#undef ALL_READWRITE
#undef S_IRGRP
#undef S_IROTH
#undef S_IRUSR
#undef S_IWGRP
#undef S_IWOTH
#undef S_IWUSR
#undef S_IXGRP
#undef S_IXOTH
#undef S_IXUSR
#undef TEMPFILE_PERMISSIONS

using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $PosixFilePermission = ::java::nio::file::attribute::PosixFilePermission;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $UnixConstants = ::sun::nio::fs::UnixConstants;
using $UnixFileModeAttribute$1 = ::sun::nio::fs::UnixFileModeAttribute$1;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _UnixFileModeAttribute_FieldInfo_[] = {
	{"ALL_PERMISSIONS", "I", nullptr, $STATIC | $FINAL, $staticField(UnixFileModeAttribute, ALL_PERMISSIONS)},
	{"ALL_READWRITE", "I", nullptr, $STATIC | $FINAL, $staticField(UnixFileModeAttribute, ALL_READWRITE)},
	{"TEMPFILE_PERMISSIONS", "I", nullptr, $STATIC | $FINAL, $staticField(UnixFileModeAttribute, TEMPFILE_PERMISSIONS)},
	{}
};

$MethodInfo _UnixFileModeAttribute_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnixFileModeAttribute::*)()>(&UnixFileModeAttribute::init$))},
	{"toUnixMode", "(Ljava/util/Set;)I", "(Ljava/util/Set<Ljava/nio/file/attribute/PosixFilePermission;>;)I", $STATIC, $method(static_cast<int32_t(*)($Set*)>(&UnixFileModeAttribute::toUnixMode))},
	{"toUnixMode", "(I[Ljava/nio/file/attribute/FileAttribute;)I", "(I[Ljava/nio/file/attribute/FileAttribute<*>;)I", $STATIC | $TRANSIENT, $method(static_cast<int32_t(*)(int32_t,$FileAttributeArray*)>(&UnixFileModeAttribute::toUnixMode))},
	{}
};

$InnerClassInfo _UnixFileModeAttribute_InnerClassesInfo_[] = {
	{"sun.nio.fs.UnixFileModeAttribute$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _UnixFileModeAttribute_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.UnixFileModeAttribute",
	"java.lang.Object",
	nullptr,
	_UnixFileModeAttribute_FieldInfo_,
	_UnixFileModeAttribute_MethodInfo_,
	nullptr,
	nullptr,
	_UnixFileModeAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.UnixFileModeAttribute$1"
};

$Object* allocate$UnixFileModeAttribute($Class* clazz) {
	return $of($alloc(UnixFileModeAttribute));
}

int32_t UnixFileModeAttribute::ALL_PERMISSIONS = 0;
int32_t UnixFileModeAttribute::ALL_READWRITE = 0;
int32_t UnixFileModeAttribute::TEMPFILE_PERMISSIONS = 0;

void UnixFileModeAttribute::init$() {
}

int32_t UnixFileModeAttribute::toUnixMode($Set* perms) {
	$init(UnixFileModeAttribute);
	int32_t mode = 0;
	{
		$var($Iterator, i$, $nc(perms)->iterator());
		for (; $nc(i$)->hasNext();) {
			$PosixFilePermission* perm = $cast($PosixFilePermission, i$->next());
			{
				if (perm == nullptr) {
					$throwNew($NullPointerException);
				}
				$init($UnixFileModeAttribute$1);
				switch ($nc($UnixFileModeAttribute$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->get($nc((perm))->ordinal())) {
				case 1:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IRUSR;
						break;
					}
				case 2:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IWUSR;
						break;
					}
				case 3:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IXUSR;
						break;
					}
				case 4:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IRGRP;
						break;
					}
				case 5:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IWGRP;
						break;
					}
				case 6:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IXGRP;
						break;
					}
				case 7:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IROTH;
						break;
					}
				case 8:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IWOTH;
						break;
					}
				case 9:
					{
						$init($UnixConstants);
						mode |= $UnixConstants::S_IXOTH;
						break;
					}
				}
			}
		}
	}
	return mode;
}

int32_t UnixFileModeAttribute::toUnixMode(int32_t defaultMode, $FileAttributeArray* attrs) {
	$init(UnixFileModeAttribute);
	$useLocalCurrentObjectStackCache();
	int32_t mode = defaultMode;
	{
		$var($FileAttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($FileAttribute, attr, arr$->get(i$));
			{
				$var($String, name, $nc(attr)->name());
				bool var$0 = !$nc(name)->equals("posix:permissions"_s);
				if (var$0 && !name->equals("unix:permissions"_s)) {
					$throwNew($UnsupportedOperationException, $$str({"\'"_s, $(attr->name()), "\' not supported as initial attribute"_s}));
				}
				mode = toUnixMode($cast($Set, $(attr->value())));
			}
		}
	}
	return mode;
}

void clinit$UnixFileModeAttribute($Class* class$) {
	$init($UnixConstants);
	UnixFileModeAttribute::ALL_PERMISSIONS = ((((((($UnixConstants::S_IRUSR | $UnixConstants::S_IWUSR) | $UnixConstants::S_IXUSR) | $UnixConstants::S_IRGRP) | $UnixConstants::S_IWGRP) | $UnixConstants::S_IXGRP) | $UnixConstants::S_IROTH) | $UnixConstants::S_IWOTH) | $UnixConstants::S_IXOTH;
	UnixFileModeAttribute::ALL_READWRITE = (((($UnixConstants::S_IRUSR | $UnixConstants::S_IWUSR) | $UnixConstants::S_IRGRP) | $UnixConstants::S_IWGRP) | $UnixConstants::S_IROTH) | $UnixConstants::S_IWOTH;
	UnixFileModeAttribute::TEMPFILE_PERMISSIONS = ($UnixConstants::S_IRUSR | $UnixConstants::S_IWUSR) | $UnixConstants::S_IXUSR;
}

UnixFileModeAttribute::UnixFileModeAttribute() {
}

$Class* UnixFileModeAttribute::load$($String* name, bool initialize) {
	$loadClass(UnixFileModeAttribute, name, initialize, &_UnixFileModeAttribute_ClassInfo_, clinit$UnixFileModeAttribute, allocate$UnixFileModeAttribute);
	return class$;
}

$Class* UnixFileModeAttribute::class$ = nullptr;

		} // fs
	} // nio
} // sun