#ifndef _LineLengthsSource_h_
#define _LineLengthsSource_h_
//$ class LineLengthsSource
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class BufferedWriter;
		class DataOutputStream;
		class OutputStream;
		class PrintWriter;
	}
}

class LineLengthsSource : public ::java::lang::Runnable {
	$class(LineLengthsSource, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LineLengthsSource();
	void init$(::java::io::OutputStream* us, ::java::io::BufferedWriter* ts, ::java::io::PrintWriter* log);
	void flush();
	void go(int32_t t);
	virtual void run() override;
	$String* termName(int32_t t);
	$String* termString(int32_t t);
	::java::io::DataOutputStream* uo = nullptr;
	::java::io::BufferedWriter* to = nullptr;
	::java::io::PrintWriter* log = nullptr;
};

#endif // _LineLengthsSource_h_