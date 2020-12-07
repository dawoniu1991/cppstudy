#ifndef DMLC_LOGGING_H_
#define DMLC_LOGGING_H_
#include <sstream>
//#define CHECK_NOTNULL(x) \
  //((x) == NULL ? LogMessageFatal(__FILE__, __LINE__).stream() << "Check  notnull: "  #x << ' ', (x) : (x)) // NOLINT(*)
// Debug-only checking.#pragma once

//#define CHECK_NOTNULL(x) \
//      std::cout << (LogMessageFatal(__FILE__, __LINE__).stream() << "Check  notnull: "  #x << ' ', (x)).str() \
//       #x

#define CHECK_NOTNULL(x)                  \
    do{                             \
        std::ostringstream ostr2;  \
        ostr2 << "test 2020  " << "2012222"  #x <<(x) << " sss" << endl; \
            cout << ostr2.str();         \
    }while(0);

class LogMessageFatal {
public:
    LogMessageFatal(const char* file, int line) {
        log_stream_ << "[" << "] " << file << ":"
            << line << ": ";
    }
    std::ostringstream& stream() { return log_stream_; }


private:
    std::ostringstream log_stream_;
    LogMessageFatal(const LogMessageFatal&);
    void operator=(const LogMessageFatal&);
};
#endif  // DMLC_LOGGING_H_
