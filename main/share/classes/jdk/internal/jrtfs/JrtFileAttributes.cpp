#include <jdk/internal/jrtfs/JrtFileAttributes.h>
#include <java/lang/Appendable.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/Formatter.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Formatter = ::java::util::Formatter;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;

namespace jdk {
	namespace internal {
		namespace jrtfs {

void JrtFileAttributes::init$($ImageReader$Node* node) {
	$set(this, node, node);
}

$FileTime* JrtFileAttributes::creationTime() {
	return $nc(this->node)->creationTime();
}

bool JrtFileAttributes::isDirectory() {
	return $nc(this->node)->isDirectory();
}

bool JrtFileAttributes::isOther() {
	return false;
}

bool JrtFileAttributes::isRegularFile() {
	return !isDirectory();
}

$FileTime* JrtFileAttributes::lastAccessTime() {
	return $nc(this->node)->lastAccessTime();
}

$FileTime* JrtFileAttributes::lastModifiedTime() {
	return $nc(this->node)->lastModifiedTime();
}

int64_t JrtFileAttributes::size() {
	return $nc(this->node)->size();
}

bool JrtFileAttributes::isSymbolicLink() {
	return $nc(this->node)->isLink();
}

$Object* JrtFileAttributes::fileKey() {
	return $nc(this->node)->resolveLink(true);
}

int64_t JrtFileAttributes::compressedSize() {
	return $nc(this->node)->compressedSize();
}

$String* JrtFileAttributes::extension() {
	return $nc(this->node)->extension();
}

$String* JrtFileAttributes::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder, 1024));
	{
		$var($Formatter, fm, $new($Formatter, sb));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (creationTime() != nullptr) {
					fm->format("    creationTime    : %tc%n"_s, $$new($ObjectArray, {$($Long::valueOf($$nc(creationTime())->toMillis()))}));
				} else {
					fm->format("    creationTime    : null%n"_s, $$new($ObjectArray, 0));
				}
				if (lastAccessTime() != nullptr) {
					fm->format("    lastAccessTime  : %tc%n"_s, $$new($ObjectArray, {$($Long::valueOf($$nc(lastAccessTime())->toMillis()))}));
				} else {
					fm->format("    lastAccessTime  : null%n"_s, $$new($ObjectArray, 0));
				}
				fm->format("    lastModifiedTime: %tc%n"_s, $$new($ObjectArray, {$($Long::valueOf($$nc(lastModifiedTime())->toMillis()))}));
				fm->format("    isRegularFile   : %b%n"_s, $$new($ObjectArray, {$($Boolean::valueOf(isRegularFile()))}));
				fm->format("    isDirectory     : %b%n"_s, $$new($ObjectArray, {$($Boolean::valueOf(isDirectory()))}));
				fm->format("    isSymbolicLink  : %b%n"_s, $$new($ObjectArray, {$($Boolean::valueOf(isSymbolicLink()))}));
				fm->format("    isOther         : %b%n"_s, $$new($ObjectArray, {$($Boolean::valueOf(isOther()))}));
				fm->format("    fileKey         : %s%n"_s, $$new($ObjectArray, {$(fileKey())}));
				fm->format("    size            : %d%n"_s, $$new($ObjectArray, {$($Long::valueOf(size()))}));
				fm->format("    compressedSize  : %d%n"_s, $$new($ObjectArray, {$($Long::valueOf(compressedSize()))}));
				fm->format("    extension       : %s%n"_s, $$new($ObjectArray, {$(extension())}));
			} catch ($Throwable& t$) {
				try {
					fm->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			fm->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return sb->toString();
}

JrtFileAttributes::JrtFileAttributes() {
}

$Class* JrtFileAttributes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"node", "Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PRIVATE | $FINAL, $field(JrtFileAttributes, node)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jimage/ImageReader$Node;)V", nullptr, 0, $method(JrtFileAttributes, init$, void, $ImageReader$Node*)},
		{"compressedSize", "()J", nullptr, $PUBLIC, $method(JrtFileAttributes, compressedSize, int64_t)},
		{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, creationTime, $FileTime*)},
		{"extension", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(JrtFileAttributes, extension, $String*)},
		{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, fileKey, $Object*)},
		{"isDirectory", "()Z", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, isDirectory, bool)},
		{"isOther", "()Z", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, isOther, bool)},
		{"isRegularFile", "()Z", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, isRegularFile, bool)},
		{"isSymbolicLink", "()Z", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, isSymbolicLink, bool)},
		{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, lastAccessTime, $FileTime*)},
		{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, lastModifiedTime, $FileTime*)},
		{"size", "()J", nullptr, $PUBLIC, $virtualMethod(JrtFileAttributes, size, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(JrtFileAttributes, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.jrtfs.JrtFileAttributes",
		"java.lang.Object",
		"java.nio.file.attribute.BasicFileAttributes",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JrtFileAttributes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JrtFileAttributes);
	});
	return class$;
}

$Class* JrtFileAttributes::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk