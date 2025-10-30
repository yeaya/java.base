#include <jdk/internal/jrtfs/JrtFileAttributes.h>

#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Appendable.h>
#include <java/nio/file/attribute/FileTime.h>
#include <java/util/Formatter.h>
#include <jdk/internal/jimage/ImageReader$Node.h>
#include <jcpp.h>

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Appendable = ::java::lang::Appendable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $FileTime = ::java::nio::file::attribute::FileTime;
using $Formatter = ::java::util::Formatter;
using $ImageReader$Node = ::jdk::internal::jimage::ImageReader$Node;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _JrtFileAttributes_FieldInfo_[] = {
	{"node", "Ljdk/internal/jimage/ImageReader$Node;", nullptr, $PRIVATE | $FINAL, $field(JrtFileAttributes, node)},
	{}
};

$MethodInfo _JrtFileAttributes_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jimage/ImageReader$Node;)V", nullptr, 0, $method(static_cast<void(JrtFileAttributes::*)($ImageReader$Node*)>(&JrtFileAttributes::init$))},
	{"compressedSize", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(JrtFileAttributes::*)()>(&JrtFileAttributes::compressedSize))},
	{"creationTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"extension", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(JrtFileAttributes::*)()>(&JrtFileAttributes::extension))},
	{"fileKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isDirectory", "()Z", nullptr, $PUBLIC},
	{"isOther", "()Z", nullptr, $PUBLIC},
	{"isRegularFile", "()Z", nullptr, $PUBLIC},
	{"isSymbolicLink", "()Z", nullptr, $PUBLIC},
	{"lastAccessTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;", nullptr, $PUBLIC},
	{"size", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _JrtFileAttributes_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.jrtfs.JrtFileAttributes",
	"java.lang.Object",
	"java.nio.file.attribute.BasicFileAttributes",
	_JrtFileAttributes_FieldInfo_,
	_JrtFileAttributes_MethodInfo_
};

$Object* allocate$JrtFileAttributes($Class* clazz) {
	return $of($alloc(JrtFileAttributes));
}

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
	return $of($nc(this->node)->resolveLink(true));
}

int64_t JrtFileAttributes::compressedSize() {
	return $nc(this->node)->compressedSize();
}

$String* JrtFileAttributes::extension() {
	return $nc(this->node)->extension();
}

$String* JrtFileAttributes::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, 1024));
	{
		$var($Formatter, fm, $new($Formatter, static_cast<$Appendable*>(sb)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (creationTime() != nullptr) {
						fm->format("    creationTime    : %tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($nc($(creationTime()))->toMillis())))}));
					} else {
						fm->format("    creationTime    : null%n"_s, $$new($ObjectArray, 0));
					}
					if (lastAccessTime() != nullptr) {
						fm->format("    lastAccessTime  : %tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($nc($(lastAccessTime()))->toMillis())))}));
					} else {
						fm->format("    lastAccessTime  : null%n"_s, $$new($ObjectArray, 0));
					}
					fm->format("    lastModifiedTime: %tc%n"_s, $$new($ObjectArray, {$($of($Long::valueOf($nc($(lastModifiedTime()))->toMillis())))}));
					fm->format("    isRegularFile   : %b%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(isRegularFile())))}));
					fm->format("    isDirectory     : %b%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(isDirectory())))}));
					fm->format("    isSymbolicLink  : %b%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(isSymbolicLink())))}));
					fm->format("    isOther         : %b%n"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(isOther())))}));
					fm->format("    fileKey         : %s%n"_s, $$new($ObjectArray, {$(fileKey())}));
					fm->format("    size            : %d%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(size())))}));
					fm->format("    compressedSize  : %d%n"_s, $$new($ObjectArray, {$($of($Long::valueOf(compressedSize())))}));
					fm->format("    extension       : %s%n"_s, $$new($ObjectArray, {$($of(extension()))}));
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
	}
	return sb->toString();
}

JrtFileAttributes::JrtFileAttributes() {
}

$Class* JrtFileAttributes::load$($String* name, bool initialize) {
	$loadClass(JrtFileAttributes, name, initialize, &_JrtFileAttributes_ClassInfo_, allocate$JrtFileAttributes);
	return class$;
}

$Class* JrtFileAttributes::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk