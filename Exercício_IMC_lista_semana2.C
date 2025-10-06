{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": [],
      "authorship_tag": "ABX9TyN3s70ixpacYf+MjL5bJZFk",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/marisout0/Maria-Mariana-Souto-ITP-2025-2/blob/main/Exerc%C3%ADcio_IMC_lista_semana2.C\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "8a3fdf88",
        "outputId": "63c46cee-bc08-4d37-a160-9267f1d55bcf"
      },
      "source": [
        "!apt update\n",
        "!apt install build-essential"
      ],
      "execution_count": 1,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "\u001b[33m\r0% [Working]\u001b[0m\r            \rHit:1 https://cli.github.com/packages stable InRelease\n",
            "\u001b[33m\r0% [Connecting to archive.ubuntu.com (185.125.190.39)] [Waiting for headers] [W\u001b[0m\r                                                                               \rGet:2 https://cloud.r-project.org/bin/linux/ubuntu jammy-cran40/ InRelease [3,632 B]\n",
            "\r                                                                               \rGet:3 https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2204/x86_64  InRelease [1,581 B]\n",
            "\u001b[33m\r0% [Waiting for headers] [Waiting for headers] [Waiting for headers] [Connected\u001b[0m\r                                                                               \rGet:4 http://security.ubuntu.com/ubuntu jammy-security InRelease [129 kB]\n",
            "Get:5 https://r2u.stat.illinois.edu/ubuntu jammy InRelease [6,555 B]\n",
            "Hit:6 http://archive.ubuntu.com/ubuntu jammy InRelease\n",
            "Get:7 http://archive.ubuntu.com/ubuntu jammy-updates InRelease [128 kB]\n",
            "Hit:8 https://ppa.launchpadcontent.net/deadsnakes/ppa/ubuntu jammy InRelease\n",
            "Hit:9 https://ppa.launchpadcontent.net/graphics-drivers/ppa/ubuntu jammy InRelease\n",
            "Get:10 http://archive.ubuntu.com/ubuntu jammy-backports InRelease [127 kB]\n",
            "Get:11 https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2204/x86_64  Packages [2,065 kB]\n",
            "Hit:12 https://ppa.launchpadcontent.net/ubuntugis/ppa/ubuntu jammy InRelease\n",
            "Get:13 https://r2u.stat.illinois.edu/ubuntu jammy/main all Packages [9,323 kB]\n",
            "Get:14 https://r2u.stat.illinois.edu/ubuntu jammy/main amd64 Packages [2,809 kB]\n",
            "Get:15 http://security.ubuntu.com/ubuntu jammy-security/main amd64 Packages [3,415 kB]\n",
            "Get:16 http://security.ubuntu.com/ubuntu jammy-security/universe amd64 Packages [1,275 kB]\n",
            "Get:17 http://archive.ubuntu.com/ubuntu jammy-updates/universe amd64 Packages [1,580 kB]\n",
            "Get:18 http://archive.ubuntu.com/ubuntu jammy-updates/main amd64 Packages [3,738 kB]\n",
            "Get:19 http://archive.ubuntu.com/ubuntu jammy-backports/main amd64 Packages [83.9 kB]\n",
            "Get:20 http://archive.ubuntu.com/ubuntu jammy-backports/universe amd64 Packages [35.2 kB]\n",
            "Fetched 24.7 MB in 6s (3,965 kB/s)\n",
            "Reading package lists... Done\n",
            "Building dependency tree... Done\n",
            "Reading state information... Done\n",
            "43 packages can be upgraded. Run 'apt list --upgradable' to see them.\n",
            "\u001b[1;33mW: \u001b[0mSkipping acquire of configured file 'main/source/Sources' as repository 'https://r2u.stat.illinois.edu/ubuntu jammy InRelease' does not seem to provide it (sources.list entry misspelt?)\u001b[0m\n",
            "Reading package lists... Done\n",
            "Building dependency tree... Done\n",
            "Reading state information... Done\n",
            "build-essential is already the newest version (12.9ubuntu3).\n",
            "0 upgraded, 0 newly installed, 0 to remove and 43 not upgraded.\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "%%writefile imc.c\n",
        "#include <stdio.h>\n",
        "#include <math.h>\n",
        "\n",
        "int main() {\n",
        "    // Declaração das variáveis. Usando float para permitir valores com casas decimais.\n",
        "    float peso, altura, imc;\n",
        "\n",
        "    // Solicita e lê o peso do usuário\n",
        "    printf(\"Digite o peso em kg: \");\n",
        "    scanf(\"%f\", &peso);\n",
        "\n",
        "    // Solicita e lê a altura do usuário\n",
        "    printf(\"Digite a altura em metros: \");\n",
        "    scanf(\"%f\", &altura);\n",
        "\n",
        "    // Calcula o IMC usando a fórmula IMC = peso / (altura * altura)\n",
        "    imc = peso / (altura*altura);\n",
        "\n",
        "    // Exibe o resultado do IMC\n",
        "    // O \".2f\" no printf formata a saída.\n",
        "    printf(\"O seu IMC e: %.2f\\n\", imc);\n",
        "\n",
        "    return 0;\n",
        "}"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "SJKgyYCx5BDC",
        "outputId": "bddaa8cf-2b8b-47b8-9a89-e550bd0f25d1"
      },
      "execution_count": 4,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Overwriting imc.c\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [
        "!gcc imc.c -o imc -lm\n",
        "!./imc"
      ],
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "G724wUFi5QjS",
        "outputId": "9c783e84-0f49-4530-9e64-557260bb5be8"
      },
      "execution_count": 6,
      "outputs": [
        {
          "output_type": "stream",
          "name": "stdout",
          "text": [
            "Digite o peso em kg: 67\n",
            "Digite a altura em metros: 1.65\n",
            "O seu IMC e: 24.61\n"
          ]
        }
      ]
    }
  ]
}