#ifndef CMDLINE_OPTIONS_HPP
#define CMDLINE_OPTIONS_HPP

#include <string>

#include <osmium/osm/timestamp.hpp>
#include <osmium/util/verbose_output.hpp>

enum return_code : int {
    okay  = 0,
    error = 1,
    fatal = 2
};

struct Options {

    osmium::util::VerboseOutput vout {true};

    std::string input_filename {"-"};
    std::string output_filename {"out.tif"};
    std::string input_format;
    int epsg = 4326;
    size_t width = 1024;
    size_t height = 512;

    Options(int argc, char* argv[]);

}; // struct Options

#endif // CMDLINE_OPTIONS_HPP