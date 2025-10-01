#include <java/io/FilePermission.h>

#include <java/io/File.h>
#include <java/io/FilePermission$1.h>
#include <java/io/FilePermission$2.h>
#include <java/io/FilePermissionCollection.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <java/util/StringJoiner.h>
#include <jdk/internal/access/JavaIOFilePermissionAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/nio/fs/DefaultFileSystemProvider.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/util/FilePermCompat.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef FILE_EXECUTE_ACTION
#undef ALL
#undef FILE_READ_ACTION
#undef RECURSIVE_CHAR
#undef FILE_WRITE_ACTION
#undef READLINK
#undef FILE_DELETE_ACTION
#undef FILE_READLINK_ACTION
#undef DASH_PATH
#undef WRITE
#undef READ
#undef EXECUTE
#undef DELETE
#undef DOTDOT_PATH
#undef NONE
#undef EMPTY_PATH
#undef WILD_CHAR

using $File = ::java::io::File;
using $FilePermission$1 = ::java::io::FilePermission$1;
using $FilePermission$2 = ::java::io::FilePermission$2;
using $FilePermissionCollection = ::java::io::FilePermissionCollection;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $FileSystem = ::java::nio::file::FileSystem;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $Path = ::java::nio::file::Path;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $StringJoiner = ::java::util::StringJoiner;
using $JavaIOFilePermissionAccess = ::jdk::internal::access::JavaIOFilePermissionAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $DefaultFileSystemProvider = ::sun::nio::fs::DefaultFileSystemProvider;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $FilePermCompat = ::sun::security::util::FilePermCompat;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace io {

$FieldInfo _FilePermission_FieldInfo_[] = {
	{"EXECUTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, EXECUTE)},
	{"WRITE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, WRITE)},
	{"READ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, READ)},
	{"DELETE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, DELETE)},
	{"READLINK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, READLINK)},
	{"ALL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, ALL)},
	{"NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, NONE)},
	{"mask", "I", nullptr, $PRIVATE | $TRANSIENT, $field(FilePermission, mask)},
	{"directory", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(FilePermission, directory)},
	{"recursive", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(FilePermission, recursive)},
	{"actions", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePermission, actions)},
	{"cpath", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(FilePermission, cpath)},
	{"npath", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $TRANSIENT, $field(FilePermission, npath)},
	{"npath2", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $TRANSIENT, $field(FilePermission, npath2)},
	{"allFiles", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(FilePermission, allFiles)},
	{"invalid", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(FilePermission, invalid)},
	{"RECURSIVE_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, RECURSIVE_CHAR)},
	{"WILD_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, WILD_CHAR)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePermission, serialVersionUID)},
	{"builtInFS", "Ljava/nio/file/FileSystem;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FilePermission, builtInFS)},
	{"here", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FilePermission, here)},
	{"EMPTY_PATH", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FilePermission, EMPTY_PATH)},
	{"DASH_PATH", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FilePermission, DASH_PATH)},
	{"DOTDOT_PATH", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FilePermission, DOTDOT_PATH)},
	{}
};

$MethodInfo _FilePermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/io/FilePermission;Ljava/nio/file/Path;Ljava/nio/file/Path;ILjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePermission::*)($String*,FilePermission*,$Path*,$Path*,int32_t,$String*)>(&FilePermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FilePermission::*)($String*,$String*)>(&FilePermission::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(FilePermission::*)($String*,int32_t)>(&FilePermission::init$))},
	{"altPath", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Path*(*)($Path*)>(&FilePermission::altPath))},
	{"containsPath", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Path*,$Path*)>(&FilePermission::containsPath))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getActions", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&FilePermission::getActions))},
	{"getActions", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMask", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&FilePermission::getMask))},
	{"getMask", "()I", nullptr, 0, $method(static_cast<int32_t(FilePermission::*)()>(&FilePermission::getMask))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{"impliesIgnoreMask", "(Ljava/io/FilePermission;)Z", nullptr, 0, $method(static_cast<bool(FilePermission::*)(FilePermission*)>(&FilePermission::impliesIgnoreMask))},
	{"init", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(FilePermission::*)(int32_t)>(&FilePermission::init))},
	{"newPermissionCollection", "()Ljava/security/PermissionCollection;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePermission::*)($ObjectInputStream*)>(&FilePermission::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"withNewActions", "(I)Ljava/io/FilePermission;", nullptr, 0, $method(static_cast<FilePermission*(FilePermission::*)(int32_t)>(&FilePermission::withNewActions))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePermission::*)($ObjectOutputStream*)>(&FilePermission::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _FilePermission_InnerClassesInfo_[] = {
	{"java.io.FilePermission$2", nullptr, nullptr, 0},
	{"java.io.FilePermission$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.io.FilePermission",
	"java.security.Permission",
	nullptr,
	_FilePermission_FieldInfo_,
	_FilePermission_MethodInfo_,
	nullptr,
	nullptr,
	_FilePermission_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.io.FilePermission$2,java.io.FilePermission$1"
};

$Object* allocate$FilePermission($Class* clazz) {
	return $of($alloc(FilePermission));
}


$FileSystem* FilePermission::builtInFS = nullptr;
$Path* FilePermission::here = nullptr;
$Path* FilePermission::EMPTY_PATH = nullptr;
$Path* FilePermission::DASH_PATH = nullptr;
$Path* FilePermission::DOTDOT_PATH = nullptr;

void FilePermission::init$($String* name, FilePermission* input, $Path* npath, $Path* npath2, int32_t mask, $String* actions) {
	$Permission::init$(name);
	$set(this, npath, npath);
	$set(this, npath2, npath2);
	$set(this, actions, actions);
	this->mask = mask;
	this->allFiles = $nc(input)->allFiles;
	this->invalid = input->invalid;
	this->recursive = input->recursive;
	this->directory = input->directory;
	$set(this, cpath, input->cpath);
}

$Path* FilePermission::altPath($Path* in) {
	$init(FilePermission);
	try {
		if (!$nc(in)->isAbsolute()) {
			return $nc($($nc(FilePermission::here)->resolve(in)))->normalize();
		} else {
			return $nc($($nc(FilePermission::here)->relativize(in)))->normalize();
		}
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

void FilePermission::init(int32_t mask) {
	$beforeCallerSensitive();
	if (((int32_t)(mask & (uint32_t)FilePermission::ALL)) != mask) {
		$throwNew($IllegalArgumentException, "invalid actions mask"_s);
	}
	if (mask == FilePermission::NONE) {
		$throwNew($IllegalArgumentException, "invalid actions mask"_s);
	}
	$init($FilePermCompat);
	if ($FilePermCompat::nb) {
		$var($String, name, getName());
		if (name == nullptr) {
			$throwNew($NullPointerException, "name can\'t be null"_s);
		}
		this->mask = mask;
		if ($nc(name)->equals("<<ALL FILES>>"_s)) {
			this->allFiles = true;
			$set(this, npath, FilePermission::EMPTY_PATH);
			return;
		}
		bool rememberStar = false;
		if ($nc(name)->endsWith("*"_s)) {
			rememberStar = true;
			this->recursive = false;
			$assign(name, $str({$(name->substring(0, name->length() - 1)), "-"_s}));
		}
		try {
			$set(this, npath, $nc($($nc(FilePermission::builtInFS)->getPath($($$new($File, name)->getPath()), $$new($StringArray, 0))))->normalize());
			$var($Path, lastName, $nc(this->npath)->getFileName());
			if (lastName != nullptr && lastName->equals(FilePermission::DASH_PATH)) {
				this->directory = true;
				this->recursive = !rememberStar;
				$set(this, npath, $nc(this->npath)->getParent());
			}
			if (this->npath == nullptr) {
				$set(this, npath, FilePermission::EMPTY_PATH);
			}
			this->invalid = false;
		} catch ($InvalidPathException&) {
			$var($InvalidPathException, ipe, $catch());
			$set(this, npath, $nc(FilePermission::builtInFS)->getPath("-u-s-e-l-e-s-s-"_s, $$new($StringArray, 0)));
			this->invalid = true;
		}
	} else {
		if (($assignField(this, cpath, getName())) == nullptr) {
			$throwNew($NullPointerException, "name can\'t be null"_s);
		}
		this->mask = mask;
		if ($nc(this->cpath)->equals("<<ALL FILES>>"_s)) {
			this->allFiles = true;
			this->directory = true;
			this->recursive = true;
			$set(this, cpath, ""_s);
			return;
		}
		try {
			$var($String, name, $nc(this->cpath)->endsWith("*"_s) ? $str({$($nc(this->cpath)->substring(0, $nc(this->cpath)->length() - 1)), "-"_s}) : this->cpath);
			$nc(FilePermission::builtInFS)->getPath($($$new($File, name)->getPath()), $$new($StringArray, 0));
		} catch ($InvalidPathException&) {
			$var($InvalidPathException, ipe, $catch());
			this->invalid = true;
			return;
		}
		$set(this, cpath, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FilePermission$2, this)))));
		int32_t len = $nc(this->cpath)->length();
		char16_t last = ((len > 0) ? $nc(this->cpath)->charAt(len - 1) : (char16_t)0);
		$init($File);
		if (last == FilePermission::RECURSIVE_CHAR && $nc(this->cpath)->charAt(len - 2) == $File::separatorChar) {
			this->directory = true;
			this->recursive = true;
			$set(this, cpath, $nc(this->cpath)->substring(0, --len));
		} else {
			if (last == FilePermission::WILD_CHAR && $nc(this->cpath)->charAt(len - 2) == $File::separatorChar) {
				this->directory = true;
				$set(this, cpath, $nc(this->cpath)->substring(0, --len));
			} else {
			}
		}
	}
}

void FilePermission::init$($String* path, $String* actions) {
	$Permission::init$(path);
	init(getMask(actions));
}

void FilePermission::init$($String* path, int32_t mask) {
	$Permission::init$(path);
	init(mask);
}

bool FilePermission::implies($Permission* p) {
	$var(FilePermission, that, nullptr);
	bool var$0 = $instanceOf(FilePermission, p);
	if (var$0) {
		$assign(that, $cast(FilePermission, p));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	return (((int32_t)(this->mask & (uint32_t)$nc(that)->mask)) == that->mask) && impliesIgnoreMask(that);
}

bool FilePermission::impliesIgnoreMask(FilePermission* that) {
	if (this == that) {
		return true;
	}
	if (this->allFiles) {
		return true;
	}
	if (this->invalid || $nc(that)->invalid) {
		return false;
	}
	if ($nc(that)->allFiles) {
		return false;
	}
	$init($FilePermCompat);
	if ($FilePermCompat::nb) {
		if ((this->recursive && $nc(that)->recursive) != that->recursive || (this->directory && $nc(that)->directory) != that->directory) {
			return false;
		}
		if ($nc(this->npath)->equals($nc(that)->npath) && this->directory == $nc(that)->directory) {
			return true;
		}
		int32_t diff = containsPath(this->npath, $nc(that)->npath);
		if (diff >= 1 && this->recursive) {
			return true;
		}
		if (diff == 1 && this->directory && !$nc(that)->directory) {
			return true;
		}
		if (this->npath2 != nullptr) {
			if ($nc(this->npath2)->equals($nc(that)->npath) && this->directory == $nc(that)->directory) {
				return true;
			}
			diff = containsPath(this->npath2, $nc(that)->npath);
			if (diff >= 1 && this->recursive) {
				return true;
			}
			if (diff == 1 && this->directory && !$nc(that)->directory) {
				return true;
			}
		}
		return false;
	} else if (this->directory) {
		if (this->recursive) {
			if ($nc(that)->directory) {
				int32_t var$1 = $nc(that->cpath)->length();
				bool var$0 = (var$1 >= $nc(this->cpath)->length());
				return var$0 && $nc(that->cpath)->startsWith(this->cpath);
			} else {
				int32_t var$3 = $nc(that->cpath)->length();
				bool var$2 = (var$3 > $nc(this->cpath)->length());
				return (var$2 && $nc(that->cpath)->startsWith(this->cpath));
			}
		} else if ($nc(that)->directory) {
			if (that->recursive) {
				return false;
			} else {
				return ($nc(this->cpath)->equals(that->cpath));
			}
		} else {
			$init($File);
			int32_t last = $nc(that->cpath)->lastIndexOf((int32_t)$File::separatorChar);
			if (last == -1) {
				return false;
			} else {
				bool var$4 = ($nc(this->cpath)->length() == (last + 1));
				return var$4 && $nc(this->cpath)->regionMatches(0, that->cpath, 0, last + 1);
			}
		}
	} else if ($nc(that)->directory) {
		return false;
	} else {
		return ($nc(this->cpath)->equals(that->cpath));
	}
}

int32_t FilePermission::containsPath($Path* p1, $Path* p2) {
	$init(FilePermission);
	$var($Object, var$0, $of($nc(p1)->getRoot()));
	if (!$Objects::equals(var$0, $($nc(p2)->getRoot()))) {
		return -1;
	}
	if ($nc(p1)->equals(FilePermission::EMPTY_PATH)) {
		if ($nc(p2)->equals(FilePermission::EMPTY_PATH)) {
			return 0;
		} else {
			if ($nc($(p2->getName(0)))->equals(FilePermission::DOTDOT_PATH)) {
				return -1;
			} else {
				return p2->getNameCount();
			}
		}
	} else {
		if ($nc(p2)->equals(FilePermission::EMPTY_PATH)) {
			int32_t c1 = p1->getNameCount();
			if (!$nc($(p1->getName(c1 - 1)))->equals(FilePermission::DOTDOT_PATH)) {
				return -1;
			}
			return c1;
		}
	}
	int32_t c1 = $nc(p1)->getNameCount();
	int32_t c2 = $nc(p2)->getNameCount();
	int32_t n = $Math::min(c1, c2);
	int32_t i = 0;
	while (i < n) {
		if (!$nc($(p1->getName(i)))->equals($(p2->getName(i)))) {
			break;
		}
		++i;
	}
	if (i < c1 && !$nc($(p1->getName(c1 - 1)))->equals(FilePermission::DOTDOT_PATH)) {
		return -1;
	}
	if (i < c2 && $nc($(p2->getName(i)))->equals(FilePermission::DOTDOT_PATH)) {
		return -1;
	}
	return c1 - i + c2 - i;
}

bool FilePermission::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	$var(FilePermission, that, nullptr);
	bool var$0 = $instanceOf(FilePermission, obj);
	if (var$0) {
		$assign(that, $cast(FilePermission, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if (this->invalid || $nc(that)->invalid) {
		return false;
	}
	$init($FilePermCompat);
	if ($FilePermCompat::nb) {
		bool var$1 = (this->mask == $nc(that)->mask) && (this->allFiles == that->allFiles) && $nc(this->npath)->equals(that->npath);
		return var$1 && $Objects::equals(this->npath2, that->npath2) && (this->directory == that->directory) && (this->recursive == that->recursive);
	} else {
		return (this->mask == $nc(that)->mask) && (this->allFiles == that->allFiles) && $nc(this->cpath)->equals(that->cpath) && (this->directory == that->directory) && (this->recursive == that->recursive);
	}
}

int32_t FilePermission::hashCode() {
	$init($FilePermCompat);
	if ($FilePermCompat::nb) {
		return $Objects::hash($$new($ObjectArray, {
			$($of($Integer::valueOf(this->mask))),
			$($of($Boolean::valueOf(this->allFiles))),
			$($of($Boolean::valueOf(this->directory))),
			$($of($Boolean::valueOf(this->recursive))),
			$of(this->npath),
			$of(this->npath2),
			$($of($Boolean::valueOf(this->invalid)))
		}));
	} else {
		return 0;
	}
}

int32_t FilePermission::getMask($String* actions) {
	$init(FilePermission);
	int32_t mask = FilePermission::NONE;
	if (actions == nullptr) {
		return mask;
	}
	$init($SecurityConstants);
	if (actions == $SecurityConstants::FILE_READ_ACTION) {
		return FilePermission::READ;
	} else {
		if (actions == $SecurityConstants::FILE_WRITE_ACTION) {
			return FilePermission::WRITE;
		} else {
			if (actions == $SecurityConstants::FILE_EXECUTE_ACTION) {
				return FilePermission::EXECUTE;
			} else {
				if (actions == $SecurityConstants::FILE_DELETE_ACTION) {
					return FilePermission::DELETE;
				} else {
					if (actions == $SecurityConstants::FILE_READLINK_ACTION) {
						return FilePermission::READLINK;
					}
				}
			}
		}
	}
	$var($chars, a, $nc(actions)->toCharArray());
	int32_t i = a->length - 1;
	if (i < 0) {
		return mask;
	}
	while (i != -1) {
		char16_t c = 0;
		while (true) {
			bool var$0 = (i != -1);
			if (var$0) {
				bool var$4 = (c = a->get(i)) == u' ';
				bool var$3 = var$4 || c == u'\r';
				bool var$2 = var$3 || c == u'\n';
				bool var$1 = var$2 || c == u'\f';
				var$0 = (var$1 || c == u'\t');
			}
			if (!(var$0)) {
				break;
			}
			{
				--i;
			}
		}
		int32_t matchlen = 0;
		if (i >= 3 && (a->get(i - 3) == u'r' || a->get(i - 3) == u'R') && (a->get(i - 2) == u'e' || a->get(i - 2) == u'E') && (a->get(i - 1) == u'a' || a->get(i - 1) == u'A') && (a->get(i) == u'd' || a->get(i) == u'D')) {
			matchlen = 4;
			mask |= FilePermission::READ;
		} else if (i >= 4 && ($nc(a)->get(i - 4) == u'w' || $nc(a)->get(i - 4) == u'W') && (a->get(i - 3) == u'r' || $nc(a)->get(i - 3) == u'R') && (a->get(i - 2) == u'i' || $nc(a)->get(i - 2) == u'I') && (a->get(i - 1) == u't' || $nc(a)->get(i - 1) == u'T') && (a->get(i) == u'e' || $nc(a)->get(i) == u'E')) {
			matchlen = 5;
			mask |= FilePermission::WRITE;
		} else if (i >= 6 && ($nc(a)->get(i - 6) == u'e' || $nc(a)->get(i - 6) == u'E') && (a->get(i - 5) == u'x' || $nc(a)->get(i - 5) == u'X') && (a->get(i - 4) == u'e' || $nc(a)->get(i - 4) == u'E') && (a->get(i - 3) == u'c' || $nc(a)->get(i - 3) == u'C') && (a->get(i - 2) == u'u' || $nc(a)->get(i - 2) == u'U') && (a->get(i - 1) == u't' || $nc(a)->get(i - 1) == u'T') && (a->get(i) == u'e' || $nc(a)->get(i) == u'E')) {
			matchlen = 7;
			mask |= FilePermission::EXECUTE;
		} else if (i >= 5 && ($nc(a)->get(i - 5) == u'd' || $nc(a)->get(i - 5) == u'D') && (a->get(i - 4) == u'e' || $nc(a)->get(i - 4) == u'E') && (a->get(i - 3) == u'l' || $nc(a)->get(i - 3) == u'L') && (a->get(i - 2) == u'e' || $nc(a)->get(i - 2) == u'E') && (a->get(i - 1) == u't' || $nc(a)->get(i - 1) == u'T') && (a->get(i) == u'e' || $nc(a)->get(i) == u'E')) {
			matchlen = 6;
			mask |= FilePermission::DELETE;
		} else if (i >= 7 && ($nc(a)->get(i - 7) == u'r' || $nc(a)->get(i - 7) == u'R') && (a->get(i - 6) == u'e' || $nc(a)->get(i - 6) == u'E') && (a->get(i - 5) == u'a' || $nc(a)->get(i - 5) == u'A') && (a->get(i - 4) == u'd' || $nc(a)->get(i - 4) == u'D') && (a->get(i - 3) == u'l' || $nc(a)->get(i - 3) == u'L') && (a->get(i - 2) == u'i' || $nc(a)->get(i - 2) == u'I') && (a->get(i - 1) == u'n' || $nc(a)->get(i - 1) == u'N') && (a->get(i) == u'k' || $nc(a)->get(i) == u'K')) {
			matchlen = 8;
			mask |= FilePermission::READLINK;
		} else {
			$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, actions}));
		}
		bool seencomma = false;
		while (i >= matchlen && !seencomma) {
			switch (c = a->get(i - matchlen)) {
			case u' ':
				{}
			case u'\r':
				{}
			case u'\n':
				{}
			case u'\f':
				{}
			case u'\t':
				{
					break;
				}
			default:
				{
					if (c == u',' && i > matchlen) {
						seencomma = true;
						break;
					}
					$throwNew($IllegalArgumentException, $$str({"invalid permission: "_s, actions}));
				}
			}
			--i;
		}
		i -= matchlen;
	}
	return mask;
}

int32_t FilePermission::getMask() {
	return this->mask;
}

$String* FilePermission::getActions(int32_t mask) {
	$init(FilePermission);
	$var($StringJoiner, sj, $new($StringJoiner, ","_s));
	if (((int32_t)(mask & (uint32_t)FilePermission::READ)) == FilePermission::READ) {
		sj->add("read"_s);
	}
	if (((int32_t)(mask & (uint32_t)FilePermission::WRITE)) == FilePermission::WRITE) {
		sj->add("write"_s);
	}
	if (((int32_t)(mask & (uint32_t)FilePermission::EXECUTE)) == FilePermission::EXECUTE) {
		sj->add("execute"_s);
	}
	if (((int32_t)(mask & (uint32_t)FilePermission::DELETE)) == FilePermission::DELETE) {
		sj->add("delete"_s);
	}
	if (((int32_t)(mask & (uint32_t)FilePermission::READLINK)) == FilePermission::READLINK) {
		sj->add("readlink"_s);
	}
	return sj->toString();
}

$String* FilePermission::getActions() {
	if (this->actions == nullptr) {
		$set(this, actions, getActions(this->mask));
	}
	return this->actions;
}

$PermissionCollection* FilePermission::newPermissionCollection() {
	return $new($FilePermissionCollection);
}

void FilePermission::writeObject($ObjectOutputStream* s) {
	if (this->actions == nullptr) {
		getActions();
	}
	$nc(s)->defaultWriteObject();
}

void FilePermission::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	init(getMask(this->actions));
}

FilePermission* FilePermission::withNewActions(int32_t effective) {
	return $new(FilePermission, $(this->getName()), this, this->npath, this->npath2, effective, nullptr);
}

void clinit$FilePermission($Class* class$) {
	$assignStatic(FilePermission::builtInFS, $DefaultFileSystemProvider::theFileSystem());
	$assignStatic(FilePermission::here, $nc(FilePermission::builtInFS)->getPath($($GetPropertyAction::privilegedGetProperty("user.dir"_s)), $$new($StringArray, 0)));
	$assignStatic(FilePermission::EMPTY_PATH, $nc(FilePermission::builtInFS)->getPath(""_s, $$new($StringArray, 0)));
	$assignStatic(FilePermission::DASH_PATH, $nc(FilePermission::builtInFS)->getPath("-"_s, $$new($StringArray, 0)));
	$assignStatic(FilePermission::DOTDOT_PATH, $nc(FilePermission::builtInFS)->getPath(".."_s, $$new($StringArray, 0)));
	{
		$SharedSecrets::setJavaIOFilePermissionAccess($$new($FilePermission$1));
	}
}

FilePermission::FilePermission() {
}

$Class* FilePermission::load$($String* name, bool initialize) {
	$loadClass(FilePermission, name, initialize, &_FilePermission_ClassInfo_, clinit$FilePermission, allocate$FilePermission);
	return class$;
}

$Class* FilePermission::class$ = nullptr;

	} // io
} // java