#include <jdk/internal/misc/FileSystemOption.h>
#include <java/nio/file/CopyOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <sun/nio/fs/ExtendedOptions$InternalOption.h>
#include <sun/nio/fs/ExtendedOptions.h>
#include <jcpp.h>

#undef DIRECT
#undef FILE_TREE
#undef INTERRUPTIBLE
#undef NOSHARE_DELETE
#undef NOSHARE_READ
#undef NOSHARE_WRITE
#undef SENSITIVITY_HIGH
#undef SENSITIVITY_LOW
#undef SENSITIVITY_MEDIUM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CopyOption = ::java::nio::file::CopyOption;
using $OpenOption = ::java::nio::file::OpenOption;
using $WatchEvent$Modifier = ::java::nio::file::WatchEvent$Modifier;
using $ExtendedOptions = ::sun::nio::fs::ExtendedOptions;
using $ExtendedOptions$InternalOption = ::sun::nio::fs::ExtendedOptions$InternalOption;

namespace jdk {
	namespace internal {
		namespace misc {

FileSystemOption* FileSystemOption::INTERRUPTIBLE = nullptr;
FileSystemOption* FileSystemOption::NOSHARE_READ = nullptr;
FileSystemOption* FileSystemOption::NOSHARE_WRITE = nullptr;
FileSystemOption* FileSystemOption::NOSHARE_DELETE = nullptr;
FileSystemOption* FileSystemOption::FILE_TREE = nullptr;
FileSystemOption* FileSystemOption::DIRECT = nullptr;
FileSystemOption* FileSystemOption::SENSITIVITY_HIGH = nullptr;
FileSystemOption* FileSystemOption::SENSITIVITY_MEDIUM = nullptr;
FileSystemOption* FileSystemOption::SENSITIVITY_LOW = nullptr;

void FileSystemOption::init$($ExtendedOptions$InternalOption* option) {
	$set(this, internalOption, option);
}

void FileSystemOption::register$($OpenOption* option) {
	$nc(this->internalOption)->register$(option);
}

void FileSystemOption::register$($CopyOption* option) {
	$nc(this->internalOption)->register$(option);
}

void FileSystemOption::register$($WatchEvent$Modifier* option) {
	$nc(this->internalOption)->register$(option);
}

void FileSystemOption::register$($WatchEvent$Modifier* option, Object$* param) {
	$nc(this->internalOption)->register$(option, param);
}

void FileSystemOption::clinit$($Class* clazz) {
	$init($ExtendedOptions);
	$assignStatic(FileSystemOption::INTERRUPTIBLE, $new(FileSystemOption, $ExtendedOptions::INTERRUPTIBLE));
	$assignStatic(FileSystemOption::NOSHARE_READ, $new(FileSystemOption, $ExtendedOptions::NOSHARE_READ));
	$assignStatic(FileSystemOption::NOSHARE_WRITE, $new(FileSystemOption, $ExtendedOptions::NOSHARE_WRITE));
	$assignStatic(FileSystemOption::NOSHARE_DELETE, $new(FileSystemOption, $ExtendedOptions::NOSHARE_DELETE));
	$assignStatic(FileSystemOption::FILE_TREE, $new(FileSystemOption, $ExtendedOptions::FILE_TREE));
	$assignStatic(FileSystemOption::DIRECT, $new(FileSystemOption, $ExtendedOptions::DIRECT));
	$assignStatic(FileSystemOption::SENSITIVITY_HIGH, $new(FileSystemOption, $ExtendedOptions::SENSITIVITY_HIGH));
	$assignStatic(FileSystemOption::SENSITIVITY_MEDIUM, $new(FileSystemOption, $ExtendedOptions::SENSITIVITY_MEDIUM));
	$assignStatic(FileSystemOption::SENSITIVITY_LOW, $new(FileSystemOption, $ExtendedOptions::SENSITIVITY_LOW));
}

FileSystemOption::FileSystemOption() {
}

$Class* FileSystemOption::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INTERRUPTIBLE", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, INTERRUPTIBLE)},
		{"NOSHARE_READ", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, NOSHARE_READ)},
		{"NOSHARE_WRITE", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, NOSHARE_WRITE)},
		{"NOSHARE_DELETE", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, NOSHARE_DELETE)},
		{"FILE_TREE", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, FILE_TREE)},
		{"DIRECT", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, DIRECT)},
		{"SENSITIVITY_HIGH", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, SENSITIVITY_HIGH)},
		{"SENSITIVITY_MEDIUM", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, SENSITIVITY_MEDIUM)},
		{"SENSITIVITY_LOW", "Ljdk/internal/misc/FileSystemOption;", "Ljdk/internal/misc/FileSystemOption<Ljava/lang/Integer;>;", $PUBLIC | $STATIC | $FINAL, $staticField(FileSystemOption, SENSITIVITY_LOW)},
		{"internalOption", "Lsun/nio/fs/ExtendedOptions$InternalOption;", "Lsun/nio/fs/ExtendedOptions$InternalOption<TT;>;", $PRIVATE | $FINAL, $field(FileSystemOption, internalOption)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/ExtendedOptions$InternalOption;)V", "(Lsun/nio/fs/ExtendedOptions$InternalOption<TT;>;)V", $PRIVATE, $method(FileSystemOption, init$, void, $ExtendedOptions$InternalOption*)},
		{"register", "(Ljava/nio/file/OpenOption;)V", nullptr, $PUBLIC, $method(FileSystemOption, register$, void, $OpenOption*)},
		{"register", "(Ljava/nio/file/CopyOption;)V", nullptr, $PUBLIC, $method(FileSystemOption, register$, void, $CopyOption*)},
		{"register", "(Ljava/nio/file/WatchEvent$Modifier;)V", nullptr, $PUBLIC, $method(FileSystemOption, register$, void, $WatchEvent$Modifier*)},
		{"register", "(Ljava/nio/file/WatchEvent$Modifier;Ljava/lang/Object;)V", "(Ljava/nio/file/WatchEvent$Modifier;TT;)V", $PUBLIC, $method(FileSystemOption, register$, void, $WatchEvent$Modifier*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.misc.FileSystemOption",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(FileSystemOption, name, initialize, &classInfo$$, FileSystemOption::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemOption);
	});
	return class$;
}

$Class* FileSystemOption::class$ = nullptr;

		} // misc
	} // internal
} // jdk