# Catsay

Welcome to **Catsay**! Inspired by the classic `cowsay`, Catsay is a fun and whimsical command-line tool that displays
ASCII art of a cat along with a custom message. Whether you're looking to add a bit of feline flair to your terminal or
just need a smile, Catsay has got you covered!

[ ![Discord](https://canary.discordapp.com/api/guilds/729950513352933386/widget.png) ](https://discord.gg/jsSGFeR)
[ ![Latest Release](https://img.shields.io/badge/Latest%20Release-v1.0.0-orange)](https://github.com/Altiran/catsay/releases/tag/v1.0.0)
[ ![GitHub Forks](https://img.shields.io/github/forks/Altiran/catsay.svg)](https://github.com/Altiran/catsay/fork)
[ ![GitHub Stars](https://img.shields.io/github/stars/Altiran/catsay.svg)](https://github.com/Altiran/catsay/stargazers)
[ ![GitHub Watches](https://img.shields.io/github/watchers/Altiran/catsay.svg)](https://github.com/Altiran/catsay/watchers)
[ ![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-green.svg)](https://github.com/Altiran/catsay/graphs/commit-activity)
[ ![Maintainer](https://img.shields.io/badge/Maintainer-Altiran_Studios-blue)](https://github.com/Altiran)
[ ![WakaTime](https://wakatime.com/badge/github/Altiran/catsay.svg)](https://wakatime.com/badge/github/Altiran/catsay)

**Like the project? Make sure to leave a ⭐ on the repository!**

## Features

- 🐱 **Adorable ASCII Cat**: Displays a cute cat that "says" your message.
- 💬 **Custom Messages**: Input any text for the cat to say.
- 🛠️ **Simple Command-Line Interface**: Lightweight and easy to use.
- 🎨 **Customizable**: Modify the ASCII art or text formatting to your liking.

## Download

Download the latest release for your operating system from
the [GitHub Releases page](https://github.com/Altiran/catsay/releases).

OR

Clone the repository and build the project yourself.
You can use CMake in your IDE or compile using GCC via the following command:

```bash
gcc -o catsay src/catsay.c
```

## Usage

Using Catsay is as easy as typing a single command. Just pass your message as an argument:

```bash
./catsay "Hello, world!"
```

And you'll see your message displayed with an adorable ASCII cat.

## Examples

Here are a few examples of Catsay in action:

```bash
$ ./catsay "I'm a cat!"
```

```
 ______________
<  I'm a cat!  >
 --------------
                \
                 \
                  \  ,_     _
                     |\\_,-~/
                     / _  _ |    ,--.
                    (  @  @ )   / ,-'
                     \  _T_/-._( (
                     /         `. \
                    |         _  \ |
                     \ \ ,  /      |
                      || |-_\__   /
                     ((_/`(____,-'
```

**Note**: If you don't provide a message, the cat will "Meow!"

```bash
$ ./catsay
```

```
 _________
<  Meow!  >
 ---------
           \
            \
             \  ,_     _
                |\\_,-~/
                / _  _ |    ,--.
               (  @  @ )   / ,-'
                \  _T_/-._( (
                /         `. \
               |         _  \ |
                \ \ ,  /      |
                 || |-_\__   /
                ((_/`(____,-'
```

## License

"Catsay" is licensed under the [MIT License](https://en.wikipedia.org/wiki/MIT_License).
See [LICENSE.md](https://github.com/Altiran/catsay/blob/main/LICENSE.md) for details.

## Acknowledgments

1. Special thanks to the creators of `cowsay` for the inspiration and to all the contributors who help make Catsay
   better!

2. Idea for Catsay inspired by [Cequal's Catsay](https://github.com/Cequallium/Catsay).
   Check out his project for more cat-related fun!

3. ASCII cat art taken from [ASCII Art Archive](https://www.asciiart.eu/animals/cats).

---
<h4 align="center">💻🐈</h4>

<!-- MADE WITH ❤️ BY ALTIRAN -->
